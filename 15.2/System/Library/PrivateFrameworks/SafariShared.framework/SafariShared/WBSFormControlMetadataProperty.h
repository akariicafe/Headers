@interface WBSFormControlMetadataProperty : NSObject {
    long long type;
    struct objc_ivar { } *ivar;
    union { struct { unsigned char disallowsAutocomplete : 1; unsigned char claimsToBeCurrentPasswordViaAutocompleteAttribute : 1; unsigned char claimsToBeNewPasswordViaAutocompleteAttribute : 1; unsigned char claimsToBeUsernameViaAutocompleteAttribute : 1; unsigned char looksLikeCreditCardCardholderField : 1; unsigned char looksLikeCreditCardCompositeExpirationDateField : 1; unsigned char looksLikeCreditCardNumberField : 1; unsigned char looksLikeCreditCardSecurityCodeField : 1; unsigned char looksLikeCreditCardTypeField : 1; unsigned char looksLikeDayField : 1; unsigned char looksLikeMonthField : 1; unsigned char looksLikeYearField : 1; unsigned char looksLikeIgnoredDataTypeField : 1; unsigned char looksLikePasswordCredentialField : 1; unsigned char looksLikeOneTimeCodeField : 1; unsigned char oneTimeCodeIsEligibleForAutomaticLogin : 1; unsigned char visible : 1; unsigned char active : 1; unsigned char disabled : 1; unsigned char readOnly : 1; unsigned char textField : 1; unsigned char secureTextField : 1; unsigned char autoFilledTextField : 1; unsigned char userEditedTextField : 1; unsigned char labeledUsernameField : 1; } flags; long long asInteger; } flagMask;
    void /* function */ *processObject;
}

@end
