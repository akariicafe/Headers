@class NSDictionary;

@interface MTFVoice : NSObject

@property (retain, nonatomic) NSDictionary *pitchCoeff;
@property (nonatomic) void *voiceData;
@property (readonly, nonatomic) struct VoiceDescription { int x0; struct VoiceSpec { unsigned int x0; unsigned int x1; } x1; int x2; unsigned char x3[64]; unsigned char x4[256]; short x5; short x6; short x7; short x8; short x9; int x10[4]; } *description;
@property (readonly, nonatomic) void *privateData;
@property (nonatomic) void *_pcmData;
@property (nonatomic) struct WrappedMTVoice { union MTBEVoiceContents { void *x0; struct MEOWReader *x1; struct PROWReader *x2; } x0; } *wrapped;

- (void)dealloc;
- (void).cxx_destruct;

@end
