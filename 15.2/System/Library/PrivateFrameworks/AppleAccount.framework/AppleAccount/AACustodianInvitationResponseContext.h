@class NSUUID;

@interface AACustodianInvitationResponseContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *custodianID;
@property (nonatomic, getter=isAccepted) BOOL accepted;
@property (nonatomic, getter=isAutoAction) BOOL autoAction;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCustodianID:(id)a0 didAccept:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
