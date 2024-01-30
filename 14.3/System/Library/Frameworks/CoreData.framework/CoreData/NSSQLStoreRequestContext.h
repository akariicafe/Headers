@class NSError, NSManagedObjectContext, NSSQLCore, NSSQLRowCache, NSPersistentStoreRequest, NSSQLiteConnection, NSQueryGenerationToken, NSException, NSNumber;

@interface NSSQLStoreRequestContext : NSObject {
    NSSQLCore *_sqlCore;
    NSQueryGenerationToken *_queryGeneration;
    BOOL _hasHistoryTracking;
}

@property (readonly, nonatomic) NSSQLCore *sqlCore;
@property (retain, nonatomic) NSSQLiteConnection *connection;
@property (readonly, nonatomic) unsigned long long requestType;
@property (readonly, nonatomic) BOOL storeIsInMemory;
@property (readonly, nonatomic) NSNumber *transactionID;
@property (readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;
@property (readonly, nonatomic) NSManagedObjectContext *context;
@property (retain, nonatomic) NSError *localError;
@property (readonly, nonatomic) int debugLogLevel;
@property (readonly, nonatomic) BOOL useColoredLogging;
@property (readonly, nonatomic) BOOL useConcurrentFetching;
@property (retain, nonatomic) id result;
@property (retain, nonatomic) NSException *exception;
@property (readonly, nonatomic) NSSQLRowCache *rowCache;
@property (readonly, nonatomic) BOOL isWritingRequest;
@property (retain, nonatomic) NSQueryGenerationToken *queryGenerationToken;
@property (readonly, nonatomic) BOOL shouldRegisterQueryGeneration;

- (id)newObjectIDForEntity:(id)a0 pk:(long long)a1;
- (BOOL)hasHistoryTracking;
- (void)executePrologue;
- (void)executeEpilogue;
- (void)dealloc;
- (id)newStatementWithSQLString:(id)a0;
- (BOOL)executeRequestCore:(id *)a0;
- (BOOL)forConflictAnalysis;
- (void)setTransactionID:(id)a0;
- (BOOL)executeRequestUsingConnection:(id)a0;
- (id)notificationSourceObject;
- (id)createNestedObjectFaultContextForObjectWithID:(id)a0;
- (id)initWithRequest:(id)a0 context:(id)a1 sqlCore:(id)a2;

@end
