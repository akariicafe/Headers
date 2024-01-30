@class NSString, MANodeFilter;

@interface PGGraphNamedLocationNode : PGGraphLocationNode <MAUniquelyIdentifiableNode>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)filterWithName:(id)a0;
+ (id)filter;
+ (id)filterWithUUID:(id)a0;
+ (void)setName:(id)a0 onLocationNodeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;
+ (void)setUUID:(id)a0 onLocationNodeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;
+ (id)filterBySettingNameNotEmptyPropertyOnFilter:(id)a0;

- (id)featureIdentifier;
- (BOOL)hasProperties:(id)a0;
- (id)description;
- (id)propertyDictionary;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)initWithName:(id)a0 uuid:(id)a1;

@end
