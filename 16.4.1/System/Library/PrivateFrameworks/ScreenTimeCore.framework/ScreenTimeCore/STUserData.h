@class NSString;

@interface STUserData : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *givenName;
@property (readonly, nonatomic) BOOL isParent;
@property (readonly, nonatomic) BOOL isRemote;
@property (readonly, nonatomic) BOOL hasPasscode;
@property (readonly, nonatomic) BOOL screenTimeEnabled;
@property (readonly, nonatomic) BOOL syncingEnabled;
@property (readonly, nonatomic) BOOL checkForUnsafePhotos;
@property (readonly, nonatomic) BOOL isCommunicationSafetyNotificationEnabled;
@property (readonly, nonatomic) BOOL isCommunicationSafetyAnalyticsEnabled;
@property (readonly, nonatomic) NSString *familyMemberType;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 givenName:(id)a1 isParent:(BOOL)a2 isRemote:(BOOL)a3 hasPasscode:(BOOL)a4 screenTimeEnabled:(BOOL)a5 syncingEnabled:(BOOL)a6 checkForUnsafePhotos:(BOOL)a7 communicationSafetyNotificationEnabled:(BOOL)a8 communicationSafetyAnalyticsEnabled:(BOOL)a9 familyMemberType:(id)a10;

@end
