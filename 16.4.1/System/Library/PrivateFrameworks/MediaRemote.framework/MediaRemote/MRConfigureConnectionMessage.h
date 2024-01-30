@class NSString;

@interface MRConfigureConnectionMessage : MRProtocolMessage

@property (copy, nonatomic) NSString *groupID;

- (unsigned long long)type;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (id)initWithGroupID:(id)a0;

@end
