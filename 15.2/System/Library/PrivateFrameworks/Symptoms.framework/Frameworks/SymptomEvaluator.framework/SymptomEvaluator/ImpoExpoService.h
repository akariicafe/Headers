@class NSObject, AnalyticsWorkspace;
@protocol OS_dispatch_queue;

@interface ImpoExpoService : NSObject {
    AnalyticsWorkspace *workspace;
    NSObject<OS_dispatch_queue> *queue;
}

+ (BOOL)_supportArchivingOfObject:(id)a0;
+ (id)impoExpoServiceInWorkspace:(id)a0 andQueue:(id)a1;
+ (id)_supportedClasses;

- (long long)deleteItemsWithNames:(id)a0;
- (id)exportAndUnarchiveItemUnderName:(id)a0 lastUpdated:(id *)a1 verificationBlock:(id /* block */)a2;
- (id)exportItemUnderName:(id)a0 lastUpdated:(id *)a1 verificationBlock:(id /* block */)a2;
- (unsigned long long)exportValueUnderName:(id)a0 lastUpdated:(id *)a1;
- (id)_initInWorkspace:(id)a0 andQueue:(id)a1;
- (long long)deleteItemsWithPrefixes:(id)a0;
- (long long)deleteItemsMatchingPredicate:(id)a0;
- (id)_locateRecord:(id)a0 createMissing:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)importValueUnderName:(id)a0 value:(unsigned long long)a1;
- (long long)deleteItemsWithPrefix:(id)a0;
- (id)listItemsNameWithPrefix:(id)a0 sortDescriptor:(id)a1;
- (id)_nameSubfix;
- (BOOL)importItemUnderName:(id)a0 item:(id)a1;
- (BOOL)archiveAndImportItemUnderName:(id)a0 item:(id)a1;

@end
