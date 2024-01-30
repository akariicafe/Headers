@class NSString, AVPlayerItem, AXMVisionAnalysisOptions, NSObject;
@protocol OS_dispatch_queue;

@interface AXMAVPlayerItemNode : AXMSourceNode <AVPlayerItemLegibleOutputPushDelegate> {
    NSObject<OS_dispatch_queue> *_avkit_queue;
}

@property (weak, nonatomic) AVPlayerItem *targetPlayerItem;
@property (retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions;
@property (readonly, nonatomic, getter=isTriggeringLegibilityEvents) BOOL triggeringLegibilityEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isSupported;
+ (id)title;

- (void).cxx_destruct;
- (void)legibleOutput:(id)a0 didOutputAttributedStrings:(id)a1 nativeSampleBuffers:(id)a2 forItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)outputSequenceWasFlushed:(id)a0;
- (void)_mainQueue_endAutoTriggerOfLegibilityEvents;
- (void)autoTriggerLegibilityEventsWithAVPlayerItem:(id)a0;
- (id)axmDescription;
- (void)endAutoTriggerOfLegibilityEvents;
- (void)nodeInitialize;
- (void)setShouldProcessRemotely:(BOOL)a0;

@end
