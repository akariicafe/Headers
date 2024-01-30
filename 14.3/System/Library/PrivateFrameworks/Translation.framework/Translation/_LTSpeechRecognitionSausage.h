@class NSArray;

@interface _LTSpeechRecognitionSausage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *bins;

- (void).cxx_destruct;
- (id)initWithRecognition:(id)a0 wordConfidenceThreshold:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithOspreySausage:(id)a0 choices:(id)a1 locale:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
