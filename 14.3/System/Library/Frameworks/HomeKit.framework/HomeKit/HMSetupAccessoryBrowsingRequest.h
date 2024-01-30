@class NSArray;

@interface HMSetupAccessoryBrowsingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *filterCategories;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithFilterCategories:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
