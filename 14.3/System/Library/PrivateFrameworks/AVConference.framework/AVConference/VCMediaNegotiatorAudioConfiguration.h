@class NSMutableSet;

@interface VCMediaNegotiatorAudioConfiguration : NSObject <NSCopying> {
    NSMutableSet *_secondaryPayloads;
}

@property (nonatomic) unsigned int ssrc;
@property (nonatomic) BOOL allowAudioSwitching;
@property (nonatomic) BOOL allowAudioRecording;
@property (nonatomic) BOOL useSBR;
@property (nonatomic) unsigned int audioUnitNumber;
@property (readonly, nonatomic) NSMutableSet *audioPayloads;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithAllowAudioSwitching:(BOOL)a0 allowAudioRecording:(BOOL)a1 useSBR:(BOOL)a2 ssrc:(unsigned int)a3 audioUnitNumber:(unsigned int)a4 audioRuleCollection:(id)a5;
- (id)initWithAllowAudioSwitching:(BOOL)a0 allowAudioRecording:(BOOL)a1 useSBR:(BOOL)a2 ssrc:(unsigned int)a3 audioUnitNumber:(unsigned int)a4;
- (void)addAudioPayload:(int)a0 isSecondary:(BOOL)a1;
- (BOOL)isSecondaryPayload:(int)a0;

@end
