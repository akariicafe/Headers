@class SignpostHIDLatencyInterval, SignpostRenderServerRenderInterval, NSArray, NSSet, SignpostContextInfo, SignpostFrameLatencyInterval, NSDictionary, NSNumber;
@protocol SignpostSupportTimeInterval;

@interface SignpostFrameLifetimeInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata>

@property (retain, nonatomic) NSArray *commits;
@property (readonly, nonatomic) unsigned int frameSeed;
@property (readonly, nonatomic) unsigned int swapID;
@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic) NSNumber *displayIDNum;
@property (readonly, nonatomic) unsigned long long displayRefreshIntervalDurationMachTime;
@property (readonly, nonatomic) unsigned char bufferCount;
@property (readonly, nonatomic) BOOL frameStallSkipRequest;
@property (readonly, nonatomic) unsigned long long missedVBLCount;
@property (readonly, nonatomic) unsigned long long previousFramePresentationMCT;
@property (readonly, nonatomic) id<SignpostSupportTimeInterval> frameOverrunInterval;
@property (readonly, nonatomic) id<SignpostSupportTimeInterval> frameOverrunInactiveDisplayInterval;
@property (readonly, nonatomic) id<SignpostSupportTimeInterval> userVisibleGlitchInterval;
@property (readonly, nonatomic) id<SignpostSupportTimeInterval> previousFrameOnScreenInterval;
@property (readonly, nonatomic) NSSet *contributingPIDs;
@property (readonly, nonatomic) NSDictionary *pidToContextInfoArrayDict;
@property (readonly, nonatomic) SignpostHIDLatencyInterval *hidLatencyInterval;
@property (readonly, nonatomic) SignpostRenderServerRenderInterval *renderInterval;
@property (readonly, nonatomic) NSArray *skippedRenders;
@property (readonly, nonatomic) SignpostFrameLatencyInterval *frameLatencyInterval;
@property (readonly, nonatomic) BOOL hidLatencyIsLong;
@property (readonly, nonatomic) BOOL renderIntervalIsLong;
@property (readonly, nonatomic) BOOL frameLatencyIsLong;
@property (readonly, nonatomic) SignpostContextInfo *earliestTimeContextInfo;
@property (readonly, nonatomic) SignpostContextInfo *contextInfoForHIDInput;
@property (readonly, nonatomic) BOOL mayBeFirstFrame;

+ (id)_frameSeedForLifetimeIntervalBegin:(id)a0;

- (void).cxx_destruct;
- (unsigned int)_displayID;
- (id)_glitchIntervalWithRoundingUp:(BOOL)a0;
- (BOOL)_hasDisplayID;
- (BOOL)_isLongMCT:(unsigned long long)a0 expectedFrameLatency:(unsigned char)a1;
- (unsigned long long)_overrunBeginMCT;
- (id)initWithInterval:(id)a0 contextArray:(id)a1 hidLatencyInterval:(id)a2 renderInterval:(id)a3 frameLatencyInterval:(id)a4 frameSeedToSkippedRenderIntervals:(id)a5;
- (id)initWithInterval:(id)a0 contextArray:(id)a1 renderInterval:(id)a2 frameSeedToSkippedRenderIntervals:(id)a3;
- (id)pidToContextIDtoContextFrameLifetimeDict;

@end
