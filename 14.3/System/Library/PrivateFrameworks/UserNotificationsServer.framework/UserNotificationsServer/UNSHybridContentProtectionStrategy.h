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

- (BOOL)isProtectedDataAvailable;
- (void).cxx_destruct;
- (void)importDataWithImportHandler:(id /* block */)a0;
- (void)migrateDataAtPath:(id)a0 toPath:(id)a1;
- (BOOL)_mergeIsSupported;
- (BOOL)dataIsAvailableAtPath:(id)a0;
- (id)initWithFileProtectionType:(id)a0 delegate:(id)a1;
- (id)dataAtPath:(id)a0;
- (BOOL)writeData:(id)a0 atPath:(id)a1 error:(id *)a2;
- (id)_strategyForProtectionState;
- (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;

@end
