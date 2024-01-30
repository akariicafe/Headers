@class NSObject, NSString, NSUUID, ML3DatabaseConnection, NSMutableArray, MLMediaLibraryService;
@protocol OS_dispatch_queue;

@interface ML3StatementAccumulator : NSObject {
    MLMediaLibraryService *_xpcService;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic) unsigned long long statementThreshold;
@property (readonly, nonatomic) NSMutableArray *statementQueue;
@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) ML3DatabaseConnection *connection;
@property (retain, nonatomic) NSUUID *existingTransactionIdentifier;
@property (nonatomic) unsigned long long priorityLevel;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (BOOL)enqueueStatement:(id)a0;
- (BOOL)flushAndWait:(BOOL)a0;
- (BOOL)_onQueueFlushAndWait:(BOOL)a0;

@end
