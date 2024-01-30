@class NSString, NSArray;

@interface CARPFObject : NSObject <CARPFObject>

@property (readonly, copy) NSString *carpf_shortDescription;
@property (readonly, copy) NSString *carpf_privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)carpf_shortDescription;


@end
