@class NSString, NSNumber, NSSet;

@interface ACDManagedAccountType : NSManagedObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *supportsMultipleAccounts;
@property (retain, nonatomic) NSString *accountTypeDescription;
@property (retain, nonatomic) NSString *credentialProtectionPolicy;
@property (retain, nonatomic) NSNumber *supportsAuthentication;
@property (retain, nonatomic) NSNumber *visibility;
@property (retain, nonatomic) NSString *credentialType;
@property (retain, nonatomic) NSString *owningBundleID;
@property (retain, nonatomic) NSSet *supportedDataclasses;
@property (retain, nonatomic) NSSet *permission;
@property (retain, nonatomic) NSSet *accounts;
@property (retain, nonatomic) NSSet *accessKeys;
@property (retain, nonatomic) NSSet *syncableDataclasses;
@property (retain, nonatomic) NSNumber *obsolete;

- (id)description;

@end
