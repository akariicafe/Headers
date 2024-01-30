@class CalDAVServerVersion, NSSet, NSString, NSURL, CoreDAVTask;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
    CoreDAVTask *_secondTask;
}

@property (retain, nonatomic) NSURL *delegatePrincipalURL;
@property (retain, nonatomic) NSURL *homeURL;
@property (readonly, nonatomic) NSSet *calendarHomes;
@property (readonly, nonatomic) NSSet *preferredUserAddresses;
@property (readonly, nonatomic) NSURL *inboxURL;
@property (readonly, nonatomic) NSURL *outboxURL;
@property (readonly, nonatomic) NSURL *dropboxURL;
@property (readonly, nonatomic) NSURL *notificationURL;
@property (readonly, nonatomic) NSURL *updatedPrincipalURL;
@property (readonly, nonatomic) CalDAVServerVersion *serverVersion;
@property (readonly, nonatomic) NSString *defaultTimedAlarms;
@property (readonly, nonatomic) NSString *defaultAllDayAlarms;
@property (readonly, nonatomic) BOOL supportsCalendarUserSearch;

- (BOOL)forceOptionsRequest;
- (void)processPrincipalHeaders:(id)a0;
- (id)_copyHomePropertiesPropFindElements;
- (id)_copyAccountPropertiesPropFindElements;
- (id)description;
- (void)propFindTask:(id)a0 parsedResponses:(id)a1 error:(id)a2;
- (void)_setPropertiesFromParsedResponses:(id)a0;
- (void)startTaskGroup;
- (void).cxx_destruct;
- (id)userAddresses;
- (id)homeSet;

@end
