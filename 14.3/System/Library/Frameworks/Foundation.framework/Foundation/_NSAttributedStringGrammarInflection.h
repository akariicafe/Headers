@class NSString;

@interface _NSAttributedStringGrammarInflection : NSObject <_NSAttributedStringGrammarInflecting, NSCopying, NSMutableCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long context;
@property long long gender;
@property long long grammaticalCase;
@property long long number;
@property long long person;

+ (id)_inflectionToMatchWordWithToken:(id)a0 wordGrammar:(id)a1;

- (void)_editByAddingWordAttributes:(struct { long long x0; long long x1; long long x2; long long x3; unsigned long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; BOOL x19; BOOL x20; BOOL x21; })a0 overrideIfAlreadySet:(BOOL)a1;
- (id)init;
- (void)_editByApplyingPluralityRulesForNumber:(id)a0 inLanguage:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithMarkupDictionary:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
