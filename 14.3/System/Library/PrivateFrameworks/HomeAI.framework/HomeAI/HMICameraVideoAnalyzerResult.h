@class NSArray, NSDictionary, HMICameraVideoFragment, NSDate;

@interface HMICameraVideoAnalyzerResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (retain) NSDate *creationDate;
@property (readonly) unsigned long long lastSequenceNumber;
@property (readonly) long long events;
@property (readonly) NSDictionary *annotationScores;
@property (readonly) NSArray *posterFrames;
@property (readonly) NSArray *frameResults;
@property long long resultCode;
@property double timeToAnalyzeFragment;
@property double timeSinceFragmentWasSubmitted;
@property (retain) HMICameraVideoFragment *videoFragment;
@property float analysisFPS;

+ (long long)_eventsFromAnalyzerEvents:(id)a0;
+ (id)_annotationScoresFromAnalyzerEvents:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)maxConfidenceEventForEventClass:(Class)a0;
- (long long)confidenceThatEventOccurred:(long long)a0;
- (id)aggregatedEvents;
- (id)initWithEvents:(long long)a0 posterFrames:(id)a1 frameResults:(id)a2 annotationScores:(id)a3 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 creationDate:(id)a5 resultCode:(long long)a6 lastSequenceNumber:(unsigned long long)a7;
- (id)initWithPosterFrames:(id)a0 frameResults:(id)a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 creationDate:(id)a3 resultCode:(long long)a4 lastSequenceNumber:(unsigned long long)a5;
- (id)aggregatedEventTypes;
- (BOOL)isEqual:(id)a0 excludeTime:(BOOL)a1;

@end
