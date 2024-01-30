@class TTSSpeechVoice;

@interface TTSSpeechChannel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) TTSSpeechVoice *voice;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithVoice:(id)a0;

@end
