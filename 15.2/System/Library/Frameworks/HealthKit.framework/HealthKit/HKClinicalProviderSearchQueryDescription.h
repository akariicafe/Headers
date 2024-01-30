@class NSString, NSNumber;

@interface HKClinicalProviderSearchQueryDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *searchString;
@property (readonly, copy, nonatomic) NSNumber *latitude;
@property (readonly, copy, nonatomic) NSNumber *longitude;
@property (readonly, nonatomic) long long pageOffset;
@property (readonly, nonatomic) unsigned long long options;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSearchString:(id)a0 latitude:(id)a1 longitude:(id)a2 pageOffset:(long long)a3 options:(unsigned long long)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
