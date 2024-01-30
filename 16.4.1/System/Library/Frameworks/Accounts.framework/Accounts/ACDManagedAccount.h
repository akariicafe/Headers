@class NSString, NSSet, ACDManagedAccountType, NSDate, NSNumber;

@interface ACDManagedAccount : NSManagedObject

@property (retain, nonatomic) NSDate *lastCredentialRenewalRejectionDate;
@property (retain, nonatomic) id dataclassProperties;
@property (retain, nonatomic) NSNumber *active;
@property (retain, nonatomic) NSNumber *warmingUp;
@property (retain, nonatomic) NSNumber *authenticated;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *authenticationType;
@property (retain, nonatomic) NSString *accountDescription;
@property (retain, nonatomic) NSNumber *supportsAuthentication;
@property (retain, nonatomic) NSString *owningBundleID;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *credentialType;
@property (retain, nonatomic) NSSet *childAccounts;
@property (retain, nonatomic) NSSet *provisionedDataclasses;
@property (retain, nonatomic) ACDManagedAccount *parentAccount;
@property (retain, nonatomic) ACDManagedAccountType *accountType;
@property (retain, nonatomic) NSSet *customProperties;
@property (retain, nonatomic) NSSet *enabledDataclasses;
@property (retain, nonatomic) NSNumber *visible;
@property (retain, nonatomic) NSString *modificationID;

- (id)description;

@end
