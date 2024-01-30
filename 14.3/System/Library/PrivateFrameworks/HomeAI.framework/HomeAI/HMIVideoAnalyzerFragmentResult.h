@class NSArray, NSSet, HMIVideoFragment, NSString, HMIVideoAnalyzerResultOutcome, HMIVideoAnalyzerDynamicConfiguration;

@interface HMIVideoAnalyzerFragmentResult : HMFObject <HMFLogging, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMIVideoFragment *fragment;
@property (readonly) NSArray *thumbnails;
@property (readonly) HMIVideoAnalyzerResultOutcome *outcome;
@property (readonly) NSArray *frameResults;
@property (readonly) HMIVideoAnalyzerDynamicConfiguration *configuration;
@property (readonly) NSSet *events;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)maxConfidenceEventForEventClass:(Class)a0;
- (id)maxConfidenceEvents;
- (id)initWithFragment:(id)a0 events:(id)a1 frameResults:(id)a2 thumbnails:(id)a3 configuration:(id)a4 outcome:(id)a5;

@end
