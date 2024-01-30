@class NSDictionary;

@interface IMDCKMockDatabase : CKDatabase

@property (readonly, nonatomic) NSDictionary *identifierToZoneMap;

- (id)_initWithContainer:(id)a0 scope:(long long)a1;
- (id)init;
- (void)dealloc;
- (void)addOperation:(id)a0;
- (id)_zoneManager;
- (id)_zoneIdentifierForOperation:(id)a0;

@end
