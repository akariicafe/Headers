@class NSString, NSArray;

@interface UIDictationPhrase : NSObject

@property (nonatomic) long long style;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSArray *alternativeInterpretations;

+ (id)phraseWithText:(id)a0 alternativeInterpretations:(id)a1 style:(long long)a2;
+ (id)phraseWithText:(id)a0 alternativeInterpretations:(id)a1;

- (void)dealloc;
- (id)description;
- (id)initWithText:(id)a0 alternativeInterpretations:(id)a1 style:(long long)a2;

@end
