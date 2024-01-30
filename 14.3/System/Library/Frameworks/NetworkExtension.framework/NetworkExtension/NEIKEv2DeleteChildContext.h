@interface NEIKEv2DeleteChildContext : NEIKEv2RequestContext

@property (nonatomic) unsigned int childID;

- (id)description;
- (id)initWithDeleteChildID:(unsigned int)a0;

@end
