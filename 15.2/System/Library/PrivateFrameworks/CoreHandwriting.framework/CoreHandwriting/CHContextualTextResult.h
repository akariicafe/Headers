@class NSString, CHTokenizedTextResult;

@interface CHContextualTextResult : NSObject

@property (retain, nonatomic) CHTokenizedTextResult *textResult;
@property (retain, nonatomic) NSString *terminatingSpecialCharacter;

+ (id)defaultWordTerminationCharacterForLocale:(id)a0;

- (void)dealloc;
- (id)initWithTextResult:(id)a0 terminatingSpecialCharacter:(id)a1;

@end
