@interface _NSAttributedStringGrammar : NSObject <NSCopying, NSMutableCopying>

@property (class, readonly) _NSAttributedStringGrammar *identityGrammar;

@property (readonly, getter=_wordAttributes) struct { long long x0; long long x1; long long x2; long long x3; unsigned long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; BOOL x19; BOOL x20; BOOL x21; } _wordAttributes;
@property long long aspect;
@property long long deictic;
@property long long determinationType;
@property long long gender;
@property long long grammaticalCase;
@property long long mood;
@property long long number;
@property long long person;
@property long long position;
@property long long tense;
@property long long verbForm;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithMarkdownDictionary:(id)a0;
- (id)initWithMorphology:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
