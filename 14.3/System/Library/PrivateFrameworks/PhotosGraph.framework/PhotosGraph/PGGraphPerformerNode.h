@class NSString, PPNamedEntity;

@interface PGGraphPerformerNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity>

@property (readonly, nonatomic) PPNamedEntity *pg_namedEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *name;
@property (readonly) NSString *uuid;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (unsigned short)domain;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;

@end
