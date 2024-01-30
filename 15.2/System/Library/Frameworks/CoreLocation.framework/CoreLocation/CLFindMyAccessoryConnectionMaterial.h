@class NSData, NSNumber;

@interface CLFindMyAccessoryConnectionMaterial : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *address;
@property (readonly) NSData *ltk;
@property (readonly) NSNumber *primaryIndex;
@property (readonly) NSNumber *secondaryIndex;

- (BOOL)isEqualToMaterial:(id)a0;
- (id)initWithAddress:(id)a0 ltk:(id)a1 primaryIndex:(id)a2 secondaryIndex:(id)a3;
- (id)initWithAddress:(id)a0 ltk:(id)a1;
- (id)dictionaryDescription;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)debugDescription;

@end
