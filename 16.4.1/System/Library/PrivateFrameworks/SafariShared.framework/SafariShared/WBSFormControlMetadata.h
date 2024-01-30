@class NSString, NSDictionary, NSArray;

@interface WBSFormControlMetadata : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {
    union { struct { unsigned char disallowsAutocomplete : 1; unsigned char claimsToBeCurrentPasswordViaAutocompleteAttribute : 1; unsigned char claimsToBeNewPasswordViaAutocompleteAttribute : 1; unsigned char claimsToBeUsernameViaAutocompleteAttribute : 1; unsigned char looksLikeCreditCardCardholderField : 1; unsigned char looksLikeCreditCardCompositeExpirationDateField : 1; unsigned char looksLikeCreditCardNumberField : 1; unsigned char looksLikeCreditCardSecurityCodeField : 1; unsigned char looksLikeCreditCardTypeField : 1; unsigned char looksLikeDayField : 1; unsigned char looksLikeMonthField : 1; unsigned char looksLikeYearField : 1; unsigned char looksLikeIgnoredDataTypeField : 1; unsigned char looksLikePasswordCredentialField : 1; unsigned char looksLikeOneTimeCodeField : 1; unsigned char oneTimeCodeIsEligibleForAutomaticLogin : 1; unsigned char visible : 1; unsigned char active : 1; unsigned char disabled : 1; unsigned char readOnly : 1; unsigned char textField : 1; unsigned char secureTextField : 1; unsigned char autoFilledTextField : 1; unsigned char userEditedTextField : 1; unsigned char labeledUsernameField : 1; } flags; long long asInteger; } _flags;
    int _size;
    int _maxLength;
    int _minLength;
    int _selectionStart;
    int _selectionLength;
    int _autoFillButtonType;
    int _lastAutoFillButtonType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *addressBookLabel;
@property (readonly, copy, nonatomic) NSDictionary *annotations;
@property (readonly, copy, nonatomic) NSArray *autocompleteTokens;
@property (readonly, copy, nonatomic) NSString *associatedUsername;
@property (readonly, copy, nonatomic) NSString *passwordRules;
@property (readonly, copy, nonatomic) NSString *fieldClass;
@property (readonly, copy, nonatomic) NSString *fieldID;
@property (readonly, copy, nonatomic) NSString *fieldName;
@property (readonly, copy, nonatomic) NSString *tagName;
@property (readonly, copy, nonatomic) NSString *uniqueID;
@property (readonly, copy, nonatomic) NSString *nextControlUniqueID;
@property (readonly, copy, nonatomic) NSString *placeholder;
@property (readonly, copy, nonatomic) NSString *requiredFormatForDateTimeInput;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly;
@property (readonly, nonatomic, getter=isTextField) BOOL textField;
@property (readonly, nonatomic, getter=isSecureTextField) BOOL secureTextField;
@property (readonly, nonatomic, getter=isAutoFilledTextField) BOOL autoFilledTextField;
@property (readonly, nonatomic, getter=isUserEditedTextField) BOOL userEditedTextField;
@property (readonly, nonatomic, getter=isLabeledUsernameField) BOOL labeledUsernameField;
@property (readonly, nonatomic) BOOL disallowsAutocomplete;
@property (readonly, nonatomic) BOOL claimsToBeCurrentPasswordViaAutocompleteAttribute;
@property (readonly, nonatomic) BOOL claimsToBeNewPasswordViaAutocompleteAttribute;
@property (readonly, nonatomic) BOOL claimsToBeUsernameViaAutocompleteAttribute;
@property (readonly, nonatomic) BOOL looksLikeCreditCardCardholderField;
@property (readonly, nonatomic) BOOL looksLikeCreditCardCompositeExpirationDateField;
@property (readonly, nonatomic) BOOL looksLikeCreditCardNumberField;
@property (readonly, nonatomic) BOOL looksLikeCreditCardSecurityCodeField;
@property (readonly, nonatomic) BOOL looksLikeCreditCardTypeField;
@property (readonly, nonatomic) BOOL looksLikeDayField;
@property (readonly, nonatomic) BOOL looksLikeMonthField;
@property (readonly, nonatomic) BOOL looksLikeYearField;
@property (readonly, nonatomic) BOOL looksLikeOneTimeCodeField;
@property (readonly, nonatomic) BOOL oneTimeCodeIsEligibleForAutomaticLogin;
@property (readonly, nonatomic) BOOL looksLikeIgnoredDataTypeField;
@property (readonly, nonatomic) BOOL looksLikePasswordCredentialField;
@property (readonly, copy, nonatomic) NSDictionary *radioButtonInfo;
@property (readonly, copy, nonatomic) NSArray *selectElementInfo;
@property (readonly, nonatomic) double rectLeft;
@property (readonly, nonatomic) double rectTop;
@property (readonly, nonatomic) double rectWidth;
@property (readonly, nonatomic) double rectHeight;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long maxLength;
@property (readonly, nonatomic) unsigned long long minLength;
@property (readonly, nonatomic) unsigned long long selectionStart;
@property (readonly, nonatomic) unsigned long long selectionLength;
@property (readonly, nonatomic) long long autoFillButtonType;
@property (readonly, nonatomic) long long lastAutoFillButtonType;
@property (readonly, nonatomic) long long oneTimeCodeFieldClassification;
@property (readonly, nonatomic) NSArray *ancestorFrameURLs;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;

@end
