@class TTSSpeechVoice;

@interface TTSSpeechChannel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TTSSpeechVoice *voice;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithVoice:(id)a0;

@end
