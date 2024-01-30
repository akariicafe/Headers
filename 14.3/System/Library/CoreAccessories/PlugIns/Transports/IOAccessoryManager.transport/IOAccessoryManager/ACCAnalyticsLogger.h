@class NSLock, NSString, NSURL, NSArray, ACCAnalyticsLoggerSQLiteStore, NSDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ACCAnalyticsLogger : NSObject <NSURLSessionDelegate> {
    ACCAnalyticsLoggerSQLiteStore *_database;
    NSObject<OS_dispatch_queue> *_queue;
    long long _secondsBetweenUploads;
    long long _secondsBetweenUploadError;
    NSDictionary *_metricsBase;
    NSArray *_blacklistedFields;
    NSArray *_blacklistedEvents;
    unsigned char _allowInsecureFigaroCert : 1;
    unsigned char _disableLogging : 1;
    unsigned char _disableUploads : 1;
    unsigned char _ignoreServersMessagesTellingUsToGoAway : 1;
}

@property (nonatomic) int user;
@property (retain, nonatomic) NSMutableArray *pluginEventsBeforeFirstUnlock;
@property (retain, nonatomic) NSMutableArray *accessorydEventsBeforeFirstUnlock;
@property (retain, nonatomic) NSLock *eventCacheLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue;
@property (readonly) NSURL *figaroUploadURL;
@property (readonly) NSString *figaroTopicName;
@property (readonly) NSURL *figaroBagURL;
@property (readonly) BOOL allowsInsecureFigaroCert;
@property BOOL ignoreServerDisablingMessages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)fuzzyDaysSinceDate:(id)a0;
+ (id)loggerForUser:(int)a0;
+ (id)databasePathForUser:(int)a0;
+ (void)addBuiltInFieldsToEvent:(id)a0;

- (id)datePropertyForKey:(id)a0;
- (void)setDateProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (id)initForUser:(int)a0;
- (void)logEventNamed:(id)a0 withAttributes:(id)a1;
- (void)_logEventNamed:(id)a0 withAttributes:(id)a1;
- (id)eventDictForEventName:(id)a0 withAttributes:(id)a1;
- (id)eventDictWithBlacklistedFieldsStrippedFrom:(id)a0;
- (BOOL)forceUploadWithError:(id *)a0 httpStatusCode:(long long *)a1;
- (void)resetUploadDateAndClearDBEntries:(BOOL)a0 dueToError:(BOOL)a1;
- (id)getLoggingJSON:(BOOL)a0 error:(id *)a1;
- (BOOL)_onQueuePostJSON:(id)a0 error:(id *)a1 httpStatusCode:(long long *)a2;
- (void)setAllowsInsecureFigaroCert:(BOOL)a0;

@end
