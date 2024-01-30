@interface NEIKEv2DeleteChildContext : NEIKEv2RequestContext

@property (nonatomic) unsigned int childID;

- (id)initWithDeleteChildID:(unsigned int)a0;
- (id)description;

@end
