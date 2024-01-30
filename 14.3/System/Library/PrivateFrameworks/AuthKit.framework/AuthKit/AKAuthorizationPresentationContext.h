@class NSString, AKUserInformation, NSData, NSArray, NSNumber, AKCredentialRequestContext;

@interface AKAuthorizationPresentationContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *localizedAppName;
@property (readonly, copy, nonatomic) NSString *informativeText;
@property (readonly, copy, nonatomic) NSString *iconName;
@property (readonly, copy, nonatomic) NSData *iconData;
@property (readonly, copy, nonatomic) NSNumber *iconScale;
@property (retain, nonatomic) AKCredentialRequestContext *credentialRequestContext;
@property (retain, nonatomic) AKUserInformation *userInformation;
@property (copy, nonatomic) NSArray *loginChoices;

+ (id)presentationContextForRequestContext:(id)a0 client:(id)a1;

- (void)_addPresenterParameters;
- (id)initWithContext:(id)a0 bundleID:(id)a1;
- (void)_addPresentationParametersForContext:(id)a0;
- (id)initWithContext:(id)a0 client:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
