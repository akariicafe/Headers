@class CPMLModelEvaluate, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CPMLModel : NSObject {
    NSString *_savedPlistPath;
    NSString *_modelPath;
    NSObject<OS_dispatch_queue> *_dispatch_queue;
    void *_mData;
    unsigned long long _totalBytesIntSection;
    unsigned long long _totalBytesRealSection;
    double *_realBase;
}

@property (retain) CPMLModelEvaluate *cpModelEvaluate;

+ (id)initCPModelPath:(id)a0 withConfiguration:(id)a1;

- (void)setDispatchQueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)reset;
- (id)getPropertyList;
- (void)boundResult:(id)a0;
- (id)evalArray:(id)a0;
- (id)evalDict:(id)a0;
- (id)evalNSObjectV:(id)a0;
- (id)evalString:(id)a0;
- (id)initWithModelPath:(id)a0 withConfiguration:(id)a1;
- (id)initWithModelPath:(id)a0 withPropertyListPath:(id)a1;
- (void)initializeModel:(id)a0 withConfiguration:(id)a1;
- (void)setCPMLAlgorithm:(id)a0;
- (void)setCPMLAlgorithmEngine:(id)a0;
- (BOOL)updateModelWithCPDB:(id)a0;
- (BOOL)updateModelWithDB:(id)a0;

@end
