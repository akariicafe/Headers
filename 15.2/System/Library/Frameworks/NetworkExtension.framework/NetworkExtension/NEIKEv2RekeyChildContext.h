@interface NEIKEv2RekeyChildContext : NEIKEv2RequestContext

@property (nonatomic) unsigned int childID;

- (id)initWithRekeyChildID:(unsigned int)a0;
- (id)description;

@end
