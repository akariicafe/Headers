@class NSString, _bmFMDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface _bmFMDatabaseQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _bmFMDatabase *_db;
}

@property (retain) NSString *path;
@property (readonly) int openFlags;
@property (copy) NSString *vfsName;

+ (Class)databaseClass;
+ (id)databaseQueueWithPath:(id)a0;
+ (id)databaseQueueWithPath:(id)a0 flags:(int)a1;
+ (id)databaseQueueWithURL:(id)a0;
+ (id)databaseQueueWithURL:(id)a0 flags:(int)a1;

- (id)database;
- (id)initWithPath:(id)a0;
- (void)close;
- (void)interrupt;
- (id)initWithURL:(id)a0;
- (void)inTransaction:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)inExclusiveTransaction:(id /* block */)a0;
- (void)dealloc;
- (BOOL)checkpoint:(int)a0 name:(id)a1 logFrameCount:(int *)a2 checkpointCount:(int *)a3 error:(id *)a4;
- (id)inSavePoint:(id /* block */)a0;
- (BOOL)checkpoint:(int)a0 error:(id *)a1;
- (BOOL)checkpoint:(int)a0 name:(id)a1 error:(id *)a2;
- (id)initWithPath:(id)a0 flags:(int)a1;
- (id)initWithPath:(id)a0 flags:(int)a1 vfs:(id)a2;
- (void)beginTransaction:(long long)a0 withBlock:(id /* block */)a1;
- (id)initWithURL:(id)a0 flags:(int)a1 vfs:(id)a2;
- (id)initWithURL:(id)a0 flags:(int)a1;
- (void)inDatabase:(id /* block */)a0;
- (void)inDeferredTransaction:(id /* block */)a0;
- (void)inImmediateTransaction:(id /* block */)a0;

@end
