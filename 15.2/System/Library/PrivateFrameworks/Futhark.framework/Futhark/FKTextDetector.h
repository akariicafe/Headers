@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface FKTextDetector : NSObject {
    struct FKSession *_sessions[8];
    struct recognizer { void *x0; int x1; struct { int x0; void *x1; struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } x2; struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } x3; struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } x4; } x2[5]; void *x3; int x4; } *_recognizer;
    struct CGSize { double width; double height; } _size;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _roi;
    unsigned int _timeDownscale[8];
    unsigned int _timeBinarizer[8];
    unsigned int _timeConcomps[8];
    unsigned int _timeSequences[8];
    unsigned int _timeRecognizer[8];
    struct { unsigned long long scaleBuffer; unsigned long long binarizer; unsigned long long linesegs; unsigned long long concomps; unsigned long long sequences; unsigned long long total; } _memoryUsage[8];
}

@property (nonatomic) BOOL createFeaturesForAllConcomps;
@property (nonatomic) BOOL enableBinarizerFiltering;
@property (nonatomic) BOOL colorSplits;
@property (nonatomic) struct { int minScale; int maxScale; } mergeSettings;
@property (nonatomic) int contrastLimit;
@property (nonatomic) BOOL detectDiacritics;
@property (nonatomic) int minimumCharacterHeight;
@property (nonatomic) long long thresholdingAlgorithm;
@property (nonatomic) int binarizerLimit;
@property (copy, nonatomic) NSString *recognitionLanguage;
@property (copy, nonatomic) NSArray *recognitionLanguages;
@property (nonatomic) BOOL returnSubFeatures;
@property (nonatomic) BOOL minimizeFalseDetections;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *multiThreadingQueue;

- (void)resetTimers;
- (void)dealloc;
- (id)initWithDimensions:(struct CGSize { double x0; double x1; })a0;
- (void)resetOptions;
- (id)detectFeaturesInBuffer:(struct __CVBuffer { } *)a0 withRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2;
- (id)detectFeaturesInBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)disableMultithreading;
- (id)createFeaturesForSessionScale:(int)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 originalSize:(struct CGSize { double x0; double x1; })a2 startID:(long long *)a3;
- (void)mergeFeature:(id)a0 withArray:(id)a1;
- (unsigned char)isValidPixelBuffer:(struct __CVBuffer { } *)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2;
- (void)translatePropertiesToOptionsWithNumSessions:(int)a0;
- (id)createFeaturesForROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 originalSize:(struct CGSize { double x0; double x1; })a1 lastID:(long long *)a2;
- (void)runRecognizerOnFeatures:(id)a0 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 size:(struct CGSize { double x0; double x1; })a2 lastID:(long long *)a3;
- (unsigned long long)getMemoryUsageOfLastOperation;

@end
