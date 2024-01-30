@class NSString, NSArray;

@interface UIDictationPhrase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long style;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *alternativeInterpretations;

+ (id)phraseWithText:(id)a0 alternativeInterpretations:(id)a1;
+ (id)phraseWithText:(id)a0 alternativeInterpretations:(id)a1 style:(long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 alternativeInterpretations:(id)a1 style:(long long)a2;

@end
