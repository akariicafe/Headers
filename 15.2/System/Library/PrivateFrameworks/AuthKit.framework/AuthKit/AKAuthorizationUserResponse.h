@class NSNumber, AKAuthorizationScopesUserSelection, NSString;
@protocol AKCredentialRequestProtocol;

@interface AKAuthorizationUserResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<AKCredentialRequestProtocol> selectedRequest;
@property (retain, nonatomic) AKAuthorizationScopesUserSelection *userSelection;
@property (retain, nonatomic) NSNumber *loginChoice;
@property (copy, nonatomic) NSString *rawAccountPassword;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
