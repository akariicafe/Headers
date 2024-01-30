@class NSString, MANodeFilter, MARelation;

@interface PGGraphHomeWorkNode : PGGraphOptimizedNode <PGGraphLocalizable> {
    NSString *_uuid;
    NSString *_label;
}

@property (class, readonly, nonatomic) MANodeFilter *homeFilter;
@property (class, readonly, nonatomic) MANodeFilter *workFilter;
@property (class, readonly, nonatomic) MARelation *ownerOfHomeWork;

@property (readonly, nonatomic) NSString *localizedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filter;

- (void).cxx_destruct;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)setLocalProperties:(id)a0;
- (id)owners;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2;
- (BOOL)isHome;

@end
