@class NSArray, NSString;

@interface CNCollationLanguage : NSObject

@property (readonly) NSArray *sections;
@property (readonly) NSString *lastCharacter;
@property (readonly) NSString *firstCharacterAfterLanguage;

- (id)initWithSections:(id)a0 lastCharacter:(id)a1 firstCharacterAfterLanguage:(id)a2;
- (void).cxx_destruct;

@end
