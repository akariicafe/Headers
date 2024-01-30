@class NSString, HMIVideoAnalyzerEventTracker, NSMutableArray;

@interface HMIVideoAnalyzerMutableReportSession : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMIVideoAnalyzerEventTracker *tracker;
@property (copy) NSString *source;
@property (readonly) NSMutableArray *fragments;

- (id)tracks;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSource:(id)a0;
- (id)tracksForEventClass:(Class)a0 confidenceLevel:(long long)a1;
- (id)tracksForEventClass:(Class)a0 confidenceThreshold:(float)a1;
- (void)appendFragmentResult:(id)a0 redactFrames:(BOOL)a1;

@end
