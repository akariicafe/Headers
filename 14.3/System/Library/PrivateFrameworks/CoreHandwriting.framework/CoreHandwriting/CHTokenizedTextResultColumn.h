@class NSArray, NSIndexSet;

@interface CHTokenizedTextResultColumn : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *tokenRows;
@property (readonly, nonatomic) NSIndexSet *strokeIndexes;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTokenRows:(id)a0;
- (BOOL)isEqualToTokenizedTextResultColumn:(id)a0;
- (long long)indexOfEquivalentTokenRow:(id)a0 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)containsStartingTokenEquivalentToToken:(id)a0;

@end
