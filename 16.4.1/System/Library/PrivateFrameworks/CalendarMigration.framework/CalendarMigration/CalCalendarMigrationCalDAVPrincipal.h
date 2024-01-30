@class NSString, NSArray, NSURL, NSDictionary;

@interface CalCalendarMigrationCalDAVPrincipal : NSObject <CalCalendarMigrationPrincipal>

@property (readonly, nonatomic) NSString *uid;
@property (retain, nonatomic) NSString *ownerUid;
@property (retain, nonatomic) NSURL *principalURL;
@property (readonly, nonatomic) NSString *principalPath;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *homePushKey;
@property (retain, nonatomic) NSString *homePath;
@property (retain, nonatomic) NSString *defaultCalendarPath;
@property (retain, nonatomic) NSString *inboxPath;
@property (retain, nonatomic) NSString *outboxPath;
@property (retain, nonatomic) NSString *notificationCollectionPath;
@property (nonatomic, getter=isWritable) BOOL writable;
@property (nonatomic, getter=isDelegate) BOOL delegate;
@property (nonatomic, getter=isExpandPropertyReportSupported) BOOL expandPropertyReportSupported;
@property (retain, nonatomic) NSArray *preferredCalendarUserAddresses;
@property (retain, nonatomic) NSDictionary *pushTransports;
@property (retain, nonatomic) NSString *login;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)addressIsAccountOwner:(id)a0;
- (void).cxx_destruct;
- (id)initWithUid:(id)a0;
- (id)_absoluteURLStringWithBaseComponents:(id)a0 andPath:(id)a1;
- (BOOL)_anyCalendarUserAddressIsEquivalentToURL:(id)a0;
- (id)_packedPreferredCalendarUserAddresses;
- (id)dictionaryForAccountProperties;

@end
