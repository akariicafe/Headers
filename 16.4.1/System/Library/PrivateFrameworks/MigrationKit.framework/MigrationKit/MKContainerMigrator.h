@class NSDictionary, NSMutableDictionary;

@interface MKContainerMigrator : MKMigrator {
    NSMutableDictionary *_containers;
}

@property (retain, nonatomic) NSDictionary *signatures;

- (id)init;
- (void).cxx_destruct;
- (void)import:(id)a0 signature:(id)a1 chunk:(id)a2 filename:(id)a3 offset:(unsigned long long)a4 length:(unsigned long long)a5 total:(unsigned long long)a6 required:(BOOL)a7 excludedFromBackup:(BOOL)a8;
- (void)importContainer:(id)a0 signature:(id)a1 chunk:(id)a2 filename:(id)a3 offset:(unsigned long long)a4 length:(unsigned long long)a5 total:(unsigned long long)a6 required:(BOOL)a7 excludedFromBackup:(BOOL)a8;

@end
