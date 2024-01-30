@class NSString;

@interface PKAppletSubcredentialSharingInvitationMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *anonymizationSalt;
@property (nonatomic) BOOL shouldRequestInvitation;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
