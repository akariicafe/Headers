@class NSString, NSArray;

@interface HMIVideoAnalyzerReportRecord : HMFObject

@property (readonly) NSString *key;
@property (readonly) unsigned long long count;
@property (readonly) float score;
@property (readonly) NSArray *frameResultIndices;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 classificationScore:(id)a1;
- (id)initWithKey:(id)a0 detectionScores:(id)a1 frameResultIndex:(unsigned long long)a2;
- (id)initWithKey:(id)a0 trackingScores:(id)a1 frameResultIndices:(id)a2;

@end
