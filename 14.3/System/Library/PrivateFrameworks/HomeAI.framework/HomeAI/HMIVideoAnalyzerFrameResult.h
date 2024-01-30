@class NSSet, HMIVideoFrame, NSString;

@interface HMIVideoAnalyzerFrameResult : HMFObject <HMFLogging, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMIVideoFrame *frame;
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
- (id)initWithFrame:(id)a0 events:(id)a1;
- (id)maxConfidenceEvents;

@end
