@class NSString, NSArray;

@interface _NSLexiconWord : NSObject

@property (readonly, nonatomic) struct { long long usage; long long sensitivity; long long person; long long partOfSpeech; unsigned long long genders; long long number; long long mood; long long tense; long long aspect; long long verbForm; long long grammaticalCase; long long deictic; long long affixType; long long determinationType; long long politeness; long long directObjectGender; long long directObjectNumber; long long indirectObjectNumber; long long indirectObjectPerson; BOOL isAbbreviation; BOOL isNotToBeSuggested; BOOL isNoncapitalizable; } attributes;
@property (readonly, copy, nonatomic) NSString *token;
@property (readonly, copy, nonatomic) NSArray *parts;

- (void)dealloc;
- (id)description;

@end
