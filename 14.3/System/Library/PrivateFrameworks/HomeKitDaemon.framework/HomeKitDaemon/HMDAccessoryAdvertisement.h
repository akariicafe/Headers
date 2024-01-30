@class NSString, HMAccessoryCategory;

@interface HMDAccessoryAdvertisement : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly) long long associationOptions;
@property (readonly, nonatomic) HMAccessoryCategory *category;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2;

@end
