@interface NSKnownKeysMappingStrategy : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) id *keys;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (unsigned long long)fastIndexForKnownKey:(id)a0;
- (id)initForKeys:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)indexForKey:(id)a0;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
