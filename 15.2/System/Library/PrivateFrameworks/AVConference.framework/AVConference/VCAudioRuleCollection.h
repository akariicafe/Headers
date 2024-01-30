@class NSMutableArray;

@interface VCAudioRuleCollection : NSObject <NSCopying> {
    int _deviceRole;
}

@property (nonatomic) int aacBlockSize;
@property (readonly, nonatomic) NSMutableArray *rules;
@property (readonly, nonatomic) NSMutableArray *secondaryPayloads;
@property (nonatomic) BOOL allowAudioSwitching;
@property (nonatomic) BOOL allowAudioRecording;

+ (int)getForcedPayload;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setRules:(id)a0;
- (void)setupAudioRulesWithSBR:(BOOL)a0 isContinuity:(BOOL)a1;
- (id)initWithPhoneContinuity:(BOOL)a0 allowAudioSwitching:(BOOL)a1 sbr:(BOOL)a2 aacBlockSize:(int)a3;
- (void)addAudioPayload:(int)a0 isSecondary:(BOOL)a1 sbr:(BOOL)a2;
- (void)addAudioRule:(id)a0;
- (void)clearAudioRules;
- (void)addAudioRules:(id)a0;
- (id)initWithPhoneContinuity:(BOOL)a0 allowAudioSwitching:(BOOL)a1 sbr:(BOOL)a2 aacBlockSize:(int)a3 isLowLatencyAudio:(BOOL)a4;
- (id)initPrimaryPayload:(int)a0 dtxPayload:(int)a1 redPayload:(int)a2 secondaryPayloads:(id)a3 allowAudioSwitching:(BOOL)a4 sbr:(BOOL)a5 aacBlockSize:(int)a6;
- (BOOL)isPayloadSupported:(int)a0;

@end
