@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _bmFMDatabasePool : NSObject {
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableArray *_databaseInPool;
    NSMutableArray *_databaseOutPool;
}

@property (copy) NSString *path;
@property id delegate;
@property unsigned long long maximumNumberOfDatabasesToCreate;
@property (readonly) int openFlags;
@property (copy) NSString *vfsName;
@property (readonly, nonatomic) unsigned long long countOfCheckedInDatabases;
@property (readonly, nonatomic) unsigned long long countOfCheckedOutDatabases;
@property (readonly, nonatomic) unsigned long long countOfOpenDatabases;

+ (Class)databaseClass;
+ (id)databasePoolWithPath:(id)a0;
+ (id)databasePoolWithURL:(id)a0;
+ (id)databasePoolWithPath:(id)a0 flags:(int)a1;
+ (id)databasePoolWithURL:(id)a0 flags:(int)a1;

- (id)db;
- (id)initWithPath:(id)a0;
- (id)initWithURL:(id)a0;
- (void)inTransaction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)inExclusiveTransaction:(id /* block */)a0;
- (void)dealloc;
- (id)inSavePoint:(id /* block */)a0;
- (id)initWithPath:(id)a0 flags:(int)a1;
- (id)initWithPath:(id)a0 flags:(int)a1 vfs:(id)a2;
- (void)executeLocked:(id /* block */)a0;
- (void)pushDatabaseBackInPool:(id)a0;
- (void)beginTransaction:(long long)a0 withBlock:(id /* block */)a1;
- (id)initWithURL:(id)a0 flags:(int)a1 vfs:(id)a2;
- (id)initWithURL:(id)a0 flags:(int)a1;
- (void)releaseAllDatabases;
- (void)inDatabase:(id /* block */)a0;
- (void)inDeferredTransaction:(id /* block */)a0;
- (void)inImmediateTransaction:(id /* block */)a0;

@end
