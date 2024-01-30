@class NSString;

@interface UNSAtomicDataContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {
    BOOL _excludeFromBackup;
    unsigned long long _dataWritingFileProtection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;
- (id)dataAtPath:(id)a0;
- (BOOL)dataIsAvailableAtPath:(id)a0;
- (void)migrateDataAtPath:(id)a0 toPath:(id)a1;
- (id)initWithFileProtectionType:(id)a0 excludeFromBackup:(BOOL)a1;
- (unsigned long long)_dataWritingOptionForFileProtectionType:(id)a0;
- (BOOL)writeData:(id)a0 atPath:(id)a1 error:(id *)a2;

@end
