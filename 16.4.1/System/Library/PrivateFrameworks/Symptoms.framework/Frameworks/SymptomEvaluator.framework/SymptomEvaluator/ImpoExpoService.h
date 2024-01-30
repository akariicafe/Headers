@class NSObject, AnalyticsWorkspace;
@protocol OS_dispatch_queue;

@interface ImpoExpoService : NSObject {
    AnalyticsWorkspace *workspace;
    NSObject<OS_dispatch_queue> *queue;
}

+ (id)impoExpoServiceInWorkspace:(id)a0 andQueue:(id)a1;
+ (BOOL)_supportArchivingOfObject:(id)a0;
+ (id)_supportedClasses;

- (id)_locateRecord:(id)a0 createMissing:(BOOL)a1;
- (id)exportAndUnarchiveItemUnderName:(id)a0 lastUpdated:(id *)a1 verificationBlock:(id /* block */)a2;
- (id)exportItemUnderName:(id)a0 lastUpdated:(id *)a1 verificationBlock:(id /* block */)a2;
- (long long)deleteItemsMatchingPredicate:(id)a0;
- (id)_nameSubfix;
- (long long)deleteItemsWithPrefix:(id)a0;
- (long long)deleteItemsWithNames:(id)a0;
- (BOOL)archiveAndImportItemUnderName:(id)a0 item:(id)a1;
- (id)_initInWorkspace:(id)a0 andQueue:(id)a1;
- (unsigned long long)exportValueUnderName:(id)a0 lastUpdated:(id *)a1;
- (BOOL)importItemUnderName:(id)a0 item:(id)a1;
- (id)listItemsNameWithPrefix:(id)a0 sortDescriptor:(id)a1;
- (BOOL)importValueUnderName:(id)a0 value:(unsigned long long)a1;
- (long long)deleteItemsWithPrefixes:(id)a0;
- (void).cxx_destruct;

@end
