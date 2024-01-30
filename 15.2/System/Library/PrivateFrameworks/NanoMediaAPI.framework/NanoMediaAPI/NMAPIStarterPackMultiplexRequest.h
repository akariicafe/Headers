@interface NMAPIStarterPackMultiplexRequest : NMAPIRequest

@property (nonatomic, getter=isUnderageUser) BOOL underageUser;

- (id)initWithUnderageUser:(BOOL)a0;
- (id)urlComponentsWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)responseParserClass;

@end
