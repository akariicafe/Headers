@class NSString, CHTokenizedTextResult, CHStrokeGroup;

@interface CHContextualTextResult : NSObject

@property (retain, nonatomic) CHTokenizedTextResult *textResult;
@property (retain, nonatomic) CHStrokeGroup *strokeGroup;
@property (retain, nonatomic) NSString *terminatingSpecialCharacter;

+ (id)defaultWordTerminationCharacterForLocale:(id)a0;

- (void).cxx_destruct;
- (id)initWithTextResult:(id)a0 terminatingSpecialCharacter:(id)a1 strokeGroup:(id)a2;

@end
