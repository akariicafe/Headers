@class NSString;

@interface REVideoPayload : RESharedResourcePayload

@property (readonly, nonatomic) NSString *audioLabel;
@property (readonly, nonatomic) unsigned char audioInputMode;
@property (readonly, nonatomic) float reverbSendLevel;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAudioLabel:(id)a0 audioInputMode:(unsigned char)a1 reverbSendLevel:(float)a2;

@end
