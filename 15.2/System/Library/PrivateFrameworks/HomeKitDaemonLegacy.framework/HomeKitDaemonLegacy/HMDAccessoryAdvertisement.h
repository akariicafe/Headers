@class NSString, HMAccessoryCategory;

@interface HMDAccessoryAdvertisement : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly) long long associationOptions;
@property (readonly, nonatomic) HMAccessoryCategory *category;

- (void)setCategory:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2;

@end
