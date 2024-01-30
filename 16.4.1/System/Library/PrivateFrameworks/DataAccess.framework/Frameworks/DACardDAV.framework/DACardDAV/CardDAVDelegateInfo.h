@class NSString, NSNumber;

@interface CardDAVDelegateInfo : NSObject

@property (retain, nonatomic) NSString *principalPath;
@property (retain, nonatomic) NSNumber *dsid;
@property (retain, nonatomic) NSString *altDSID;
@property (retain, nonatomic) NSString *appleID;

+ (id)altDSIDForAccount:(id)a0;
+ (id)hardCodedPrincipalPathForDSID:(id)a0;
+ (id)dsidForAccount:(id)a0;
+ (id)appleIDForAccount:(id)a0;

- (void).cxx_destruct;
- (id)initWithFamilyMember:(id)a0;
- (id)_hardCodedPrincipalPathForFamilyMember:(id)a0;
- (void)setPropertiesOnAccount:(id)a0;

@end
