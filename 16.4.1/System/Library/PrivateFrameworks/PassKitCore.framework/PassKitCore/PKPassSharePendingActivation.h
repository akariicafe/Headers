@class NSString, PKSharingMessage;

@interface PKPassSharePendingActivation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKSharingMessage *originalInvitation;
@property (retain, nonatomic) NSString *shareIdentifier;
@property (nonatomic) BOOL isWaitingOnUserAction;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToPassSharePendingActivation:(id)a0;

@end
