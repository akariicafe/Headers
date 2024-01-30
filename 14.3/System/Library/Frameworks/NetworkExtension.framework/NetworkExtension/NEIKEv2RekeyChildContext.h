@interface NEIKEv2RekeyChildContext : NEIKEv2RequestContext

@property (nonatomic) unsigned int childID;

- (id)description;
- (id)initWithRekeyChildID:(unsigned int)a0;

@end
