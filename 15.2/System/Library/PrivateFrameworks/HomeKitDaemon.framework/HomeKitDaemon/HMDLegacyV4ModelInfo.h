@class NSString, NSDictionary;

@interface HMDLegacyV4ModelInfo : HMFObject

@property (readonly, nonatomic) NSString *hmdTypeName;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) Class hmdModelClass;

- (id)initWithClass:(Class)a0;
- (void).cxx_destruct;

@end
