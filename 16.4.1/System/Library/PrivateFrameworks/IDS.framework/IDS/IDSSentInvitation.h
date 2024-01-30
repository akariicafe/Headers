@protocol IDSDestinationProtocol;

@interface IDSSentInvitation : IDSInvitation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) id<IDSDestinationProtocol> destination;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (id)initWithDestination:(id)a0 state:(long long)a1 expirationDate:(id)a2 uniqueID:(id)a3 context:(id)a4;
- (void)setSenderMergeID:(id)a0;

@end
