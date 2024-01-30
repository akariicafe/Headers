@class NSString, UNSAtomicDataContentProtectionStrategy, UNSFileHandleContentProtectionStrategy;
@protocol UNSHybridContentProtectionStrategyDelegate;

@interface UNSHybridContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {
    id<UNSHybridContentProtectionStrategyDelegate> _delegate;
    NSString *_minimumProtection;
    BOOL _needsMerge;
    UNSAtomicDataContentProtectionStrategy *_protectedContentAvailableStrategy;
    UNSFileHandleContentProtectionStrategy *_protectedContentUnavailableStrategy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;
- (id)dataAtPath:(id)a0;
- (BOOL)dataIsAvailableAtPath:(id)a0;
- (void)importDataWithImportHandler:(id /* block */)a0;
- (void)migrateDataAtPath:(id)a0 toPath:(id)a1;
- (id)_strategyForProtectionState;
- (BOOL)_mergeIsSupported;
- (id)initWithFileProtectionType:(id)a0 excludeFromBackup:(BOOL)a1 delegate:(id)a2;
- (BOOL)isProtectedDataAvailable;
- (void).cxx_destruct;
- (BOOL)writeData:(id)a0 atPath:(id)a1 error:(id *)a2;

@end
