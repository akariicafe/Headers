@class NSString;

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long operation;
@property BOOL invitationsSentViaThirdPartyService;
@property BOOL publicShare;
@property long long numberOfInvitations;
@property (copy) NSString *sharedContentType;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)_variantSubstrings;
- (void)encodeWithCoder:(id)a0;

@end
