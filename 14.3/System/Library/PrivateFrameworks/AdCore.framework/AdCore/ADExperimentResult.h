@class NSString, NSMutableArray, NSNumber;

@interface ADExperimentResult : NSObject

@property (retain, nonatomic) NSString *experimentID;
@property (retain, nonatomic) NSString *appVectorVersion;
@property (retain, nonatomic) NSString *responseObfuscationID;
@property (retain, nonatomic) NSMutableArray *results;
@property (retain, nonatomic) NSNumber *impression;
@property (retain, nonatomic) NSNumber *tap;
@property (retain, nonatomic) NSString *addendum;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithExperimentID:(id)a0;
- (void)addPrediction:(id)a0 forTestWeights:(id)a1 andLookbackPeriod:(id)a2;

@end
