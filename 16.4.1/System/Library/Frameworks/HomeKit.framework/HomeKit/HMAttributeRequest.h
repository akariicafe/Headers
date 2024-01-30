@class NSString, HMAccessoryProfile;

@interface HMAttributeRequest : HMRequestBase

@property (readonly, nonatomic) HMAccessoryProfile *accessoryProfile;
@property (readonly, nonatomic) NSString *attribute;

- (void).cxx_destruct;
- (id)initWithAccessoryProfile:(id)a0 attribute:(id)a1;

@end
