@class NSString, NSDictionary, NSURL, NSArray, NSNumber;

@interface WBSFormMetadata : NSObject <NSSecureCoding> {
    NSNumber *_containsAtLeastOneSecureTextField;
    NSArray *_controls;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *passwordRequirements;
@property (readonly, nonatomic) BOOL allowsAutocomplete;
@property (readonly, copy, nonatomic) NSDictionary *annotations;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *confirmPasswordElementUniqueID;
@property (readonly, nonatomic) BOOL containsActiveElement;
@property (readonly, copy, nonatomic) NSString *firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
@property (readonly, nonatomic) NSURL *action;
@property (readonly, copy, nonatomic) NSArray *controls;
@property (readonly, nonatomic) long long uniqueID;
@property (readonly, nonatomic, getter=isBestForCredentialPreFill) BOOL bestForCredentialPreFill;
@property (readonly, nonatomic, getter=isBestForPageLevelAutoFill) BOOL bestForPageLevelAutoFill;
@property (readonly, nonatomic, getter=isBestForStreamlinedLogin) BOOL bestForStreamlinedLogin;
@property (readonly, nonatomic, getter=isEligibleForAutomaticLogin) BOOL eligibleForAutomaticLogin;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic) BOOL usesRelAsync;
@property (readonly, copy, nonatomic) NSString *oldPasswordElementUniqueID;
@property (readonly, copy, nonatomic) NSString *passwordElementUniqueID;
@property (readonly, copy, nonatomic) NSString *textSample;
@property (readonly, copy, nonatomic) NSString *userNameElementUniqueID;
@property (readonly, nonatomic) BOOL usesGeneratedPassword;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) BOOL isSearchForm;
@property (readonly, nonatomic) BOOL containsAtLeastOneSecureTextField;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)formMetadataByReplacingControlsWith:(id)a0;
- (id)initWithJSValue:(id)a0;

@end
