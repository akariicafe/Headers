@class NSString;

@interface BWVideoDataOutputAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) int deviceMask;
@property (nonatomic) int devicePosition;
@property (nonatomic) BOOL videoMirrored;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) double duration;
@property (nonatomic) float nominalFramerate;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (nonatomic) BOOL hdrVideo;
@property (nonatomic) unsigned long long numberOfFramesDropped;
@property (nonatomic) unsigned long long numberOfISPFramesDropped;
@property (nonatomic) unsigned long long numberOfFrames;
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
