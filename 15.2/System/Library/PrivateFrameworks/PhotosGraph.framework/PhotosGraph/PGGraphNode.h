@class NSString, MANodeFilter;

@interface PGGraphNode : MANode <PGGraphElement>

@property (class, readonly, nonatomic) MANodeFilter *filter;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)UUID;
- (void)setWeight:(float)a0;
- (unsigned long long)propertiesCount;
- (id)name;
- (id)propertyForKey:(id)a0;
- (id)keywordDescription;

@end
