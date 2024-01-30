@class WBSTOTPGenerator, NSString, NSDictionary, NSDate, NSURLProtectionSpace, WBSPasswordWarningHideMarker;

@interface WBSSavedAccountSidecar : NSObject <WBSSavedAccountSidecarInternal, NSCopying, WBSSavedAccountSidecar>

@property (retain, nonatomic) NSDictionary *originalKeychainDictionary;
@property (retain, nonatomic) WBSPasswordWarningHideMarker *hideWarningMarker;
@property (copy, nonatomic) NSDate *lastOneTimeShareDateForPasskey;
@property (copy, nonatomic) NSString *user;
@property (retain, nonatomic) WBSTOTPGenerator *totpGenerator;
@property (copy, nonatomic) NSString *notesEntry;
@property (readonly, copy, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUser:(id)a0 protectionSpace:(id)a1;
- (id)initWithUser:(id)a0 protectionSpace:(id)a1 dictionaryRepresentation:(id)a2;
- (BOOL)isSidecarDataEqualForMergingSavedAccounts:(id)a0;

@end
