@class NSString;

@interface PXManualDisplayLink : NSObject <PXDisplayLinkProtocol>

@property (nonatomic) long long preferredFramesPerSecond;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) double targetTimestamp;
@property (readonly, nonatomic) double currentMediaTime;
@property (nonatomic) unsigned int highFrameRateReason;
@property (nonatomic) unsigned long long frameRateRangeType;
@property (nonatomic) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithWeakTarget:(id)a0 selector:(SEL)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)incrementTargetTimeWithInterval:(double)a0;

@end
