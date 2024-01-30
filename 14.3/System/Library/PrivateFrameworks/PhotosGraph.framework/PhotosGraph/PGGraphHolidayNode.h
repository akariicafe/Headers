@class NSString;

@interface PGGraphHolidayNode : PGGraphOptimizedNode <PGGraphLocalizable>

@property (nonatomic) unsigned char category : 8;
@property (readonly) NSString *name;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (void)enumerateCelebratingMomentNodesUsingBlock:(id /* block */)a0;
- (unsigned short)domain;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;
- (void)enumerateCelebratingHighlightNodesUsingBlock:(id /* block */)a0;

@end
