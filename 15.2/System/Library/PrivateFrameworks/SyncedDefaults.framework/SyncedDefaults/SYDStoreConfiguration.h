@class NSString, SYDStoreID;

@interface SYDStoreConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SYDStoreID *storeID;
@property (copy, nonatomic) NSString *personaUniqueString;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStoreID:(id)a0;
- (unsigned long long)hash;

@end
