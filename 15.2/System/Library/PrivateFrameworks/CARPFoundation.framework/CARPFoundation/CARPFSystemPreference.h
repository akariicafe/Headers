@class NSString, NSArray;

@interface CARPFSystemPreference : CARPFPreference <CARPFObject>

@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSString *carpf_shortDescription;
@property (readonly, copy) NSString *carpf_privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithKey:(id)a0 options:(unsigned long long)a1 defaultValue:(id)a2 parent:(id)a3;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 options:(unsigned long long)a1 domain:(id)a2 defaultValue:(id)a3;
- (id)initWithKey:(id)a0 options:(unsigned long long)a1 domain:(id)a2 defaultValue:(id)a3 parent:(id)a4;

@end
