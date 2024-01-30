@class NSArray;

@interface ASDIAPInfoRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSArray *adamIds;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAdamIds:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
