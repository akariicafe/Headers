@class NSString, NSData, PKPartialShareInvitation;

@interface PKSharingMessageExtensionRelayServerLocalProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPartialShareInvitation *partialInvite;
@property (nonatomic) BOOL hasCheckedStatus;
@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (retain, nonatomic) NSData *analyticsSessionToken;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToSharingMessageExtensionRelayServerLocalProperties:(id)a0;

@end
