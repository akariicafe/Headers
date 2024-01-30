@class NSArray;

@interface HKSignedClinicalDataParsingResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) unsigned long long options;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithItems:(id)a0;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 options:(unsigned long long)a1;

@end
