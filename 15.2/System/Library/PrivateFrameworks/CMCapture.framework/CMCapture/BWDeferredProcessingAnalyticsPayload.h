@class NSString;

@interface BWDeferredProcessingAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) int error;
@property (nonatomic) int processingType;
@property (nonatomic) BOOL fileBacked;
@property (nonatomic) unsigned int containerAgeInSeconds;
@property (nonatomic) unsigned long long containerSizeInBytes;
@property (nonatomic) BOOL interactiveQoS;
@property (nonatomic) unsigned int graphPrepareDurationInMilliseconds;
@property (nonatomic) unsigned int jobDurationInMilliseconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventDictionary;
- (id)init;
- (id)eventName;
- (void)dealloc;
- (void)reset;

@end
