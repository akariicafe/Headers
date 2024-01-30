@class NSString, _CSDBThreadObject, NSObject;
@protocol OS_dispatch_queue;

@interface CSDBThreadedRecordStore : NSObject {
    struct CSDBRecordStore { struct __CFString *x0; struct CSDBSqliteDatabase *x1; struct __CFDictionary *x2; struct __CFDictionary *x3; struct __CFDictionary *x4; struct __CFDictionary *x5; struct __CFSet *x6; BOOL x7; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x8; void /* function */ *x9; struct __CFSet *x10; struct __CFDictionary *x11; void *x12; int x13; struct { int x0; int x1; long long *x2; struct __CFSet *x3; } x14; } *_recordStore;
    NSObject<OS_dispatch_queue> *_recordStoreQueue;
    NSString *_identifier;
    _CSDBThreadObject *_thread;
    struct CSDBLookAsideBufferConfig { int lookAsideSlotSize; int lookAsideSlotCount; unsigned char configured : 1; } _lookAsideConfig;
    BOOL _wantsRegister;
}

- (void)registerClass:(const struct { char *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; unsigned char x7; void *x8; int x9; struct *x10; void *x11; char *x12; void /* function */ *x13; void /* function */ *x14; int x15; struct *x16; int x17; void /* function */ *x18; int x19; } *)a0;
- (BOOL)ownsCurrentThreadOtherwiseAssert:(BOOL)a0;
- (void)performBlock:(id /* block */)a0 afterDelay:(double)a1;
- (void)_teardownDatabaseOnQueue;
- (void)setupDatabaseWithAllowLocalMigration:(BOOL)a0 pathBlock:(id /* block */)a1 setupStoreHandler:(void /* function */ *)a2 connectionInitializer:(void /* function */ *)a3 versionChecker:(void /* function */ *)a4 migrationHandler:(void /* function */ *)a5 schemaVersion:(int)a6 dataProtectionClass:(unsigned int)a7 registerBlock:(id /* block */)a8 exclusiveOwnership:(BOOL)a9;
- (void)teardownDatabase;
- (void)setupDatabaseWithAllowLocalMigration:(BOOL)a0 pathBlock:(id /* block */)a1 setupStoreHandler:(void /* function */ *)a2 connectionInitializer:(void /* function */ *)a3 versionChecker:(void /* function */ *)a4 migrationHandler:(void /* function */ *)a5 schemaVersion:(int)a6 dataProtectionClass:(unsigned int)a7 registerBlock:(id /* block */)a8;
- (void)dealloc;
- (void)performBlock:(id /* block */)a0 waitUntilDone:(BOOL)a1;
- (id)initWithIdentifier:(struct __CFString { } *)a0 qosClass:(unsigned short)a1 lookAsideConfig:(struct CSDBLookAsideBufferConfig { int x0; int x1; unsigned char x2 : 1; })a2;

@end
