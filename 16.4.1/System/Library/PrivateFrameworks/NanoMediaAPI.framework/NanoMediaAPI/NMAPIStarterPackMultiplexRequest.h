@interface NMAPIStarterPackMultiplexRequest : NMAPIRequest

@property (nonatomic, getter=isUnderageUser) BOOL underageUser;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUnderageUser:(BOOL)a0;
- (Class)responseParserClass;
- (id)urlComponentsWithStoreURLBag:(id)a0 error:(id *)a1;

@end
