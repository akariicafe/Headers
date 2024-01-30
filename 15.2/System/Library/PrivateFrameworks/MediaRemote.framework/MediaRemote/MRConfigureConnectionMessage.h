@class NSString;

@interface MRConfigureConnectionMessage : MRProtocolMessage

@property (copy, nonatomic) NSString *groupID;

- (id)initWithGroupID:(id)a0;
- (unsigned long long)type;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;

@end
