@class NSObject, NSMutableDictionary, NSDate, NSMutableArray, LKSwitchOperation;
@protocol OS_dispatch_semaphore;

@interface LKLogEventController : NSObject

@property (retain, nonatomic) NSMutableArray *switchOperationsMutableArray;
@property (retain, nonatomic) NSMutableDictionary *mutableKeychainItemsAddedByActivityID;
@property (retain, nonatomic) LKSwitchOperation *switchOperation;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dynamicdsema;
@property (retain, nonatomic) NSDate *logEnumarationEndTime;
@property (nonatomic) BOOL streamingLogs;
@property (copy, nonatomic) id /* block */ logEventHandler;

+ (id)loginDetailsPredicate;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isKeychainLog:(id)a0;
- (void)_handleKeychainItemEventFromLogEvent:(id)a0;
- (BOOL)_needToParseSecurityLogs;
- (void)_parseBuddLog:(id)a0;
- (void)_parseKeychainLog:(id)a0;
- (void)_parseSpringBoardLog:(id)a0;
- (void)_parseUserManagementFrameworkLog:(id)a0;
- (void)enumurateLogEventsSynchronouslyFromDate:(id)a0 predicate:(id)a1 logEventHandler:(id /* block */)a2;
- (void)enumuratePersistentLogsSynchronouslyFromDate:(id)a0 logArchivePath:(id)a1 predicate:(id)a2 logEventHandler:(id /* block */)a3;
- (id)loginDetailsWithStartDate:(id)a0 logArchivePath:(id)a1;

@end
