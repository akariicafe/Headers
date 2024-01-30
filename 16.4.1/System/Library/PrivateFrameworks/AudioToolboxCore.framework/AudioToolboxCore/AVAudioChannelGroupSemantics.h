@class AVAudioChannelLayout;

@interface AVAudioChannelGroupSemantics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int channelCount;
@property (nonatomic) unsigned int semantics;
@property (nonatomic) unsigned int terminalType;
@property (copy, nonatomic) AVAudioChannelLayout *layout;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (struct AudioChannelGroupSemantics { unsigned int x0; unsigned int x1; unsigned int x2; struct AudioChannelLayout { unsigned int x0; unsigned int x1; unsigned int x2; struct AudioChannelDescription { unsigned int x0; unsigned int x1; float x2[3]; } x3[1]; } x3; } *)createAudioChannelGroupSemantics;
- (id)initWithAudioChannelGroupSemantics:(const struct AudioChannelGroupSemantics { unsigned int x0; unsigned int x1; unsigned int x2; struct AudioChannelLayout { unsigned int x0; unsigned int x1; unsigned int x2; struct AudioChannelDescription { unsigned int x0; unsigned int x1; float x2[3]; } x3[1]; } x3; } *)a0;
- (id)initWithChannelCount:(unsigned int)a0 semantics:(unsigned int)a1 terminalType:(unsigned int)a2 layout:(id)a3;

@end
