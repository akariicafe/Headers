@class NSString, NSNumber;

@interface AppStoreKit.JSUserObject : NSObject <_TtP11AppStoreKitP33_8FC66B30E604F9835E1C3CBA5211B91519JSUserObjectExports_> {
    void /* unknown type, empty encoding */ accounts;
    void /* unknown type, empty encoding */ isFitnessAppInstallationAllowedBox;
    void /* unknown type, empty encoding */ fitnessAppInstallationAllowedConditonLock;
}

@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) BOOL isManagedAppleID;
@property (nonatomic, readonly) BOOL isUnderThirteen;
@property (nonatomic, readonly) NSNumber *userAgeIfAvailable;
@property (nonatomic, readonly) BOOL isFitnessAppInstallationAllowed;

- (id)init;
- (void).cxx_destruct;
- (id)cookieForUrlWithName:(id)a0 :(id)a1;
- (id)cookiesForUrl:(id)a0;
- (void)queryFitnessAppInstallationAllowed;

@end
