@class NSDictionary;

@interface IMDCKMockDatabase : CKDatabase

@property (readonly, nonatomic) NSDictionary *identifierToZoneMap;

- (void)addOperation:(id)a0;
- (id)_zoneManager;
- (void)dealloc;
- (id)_initWithContainer:(id)a0 scope:(long long)a1;
- (id)init;
- (id)_zoneIdentifierForOperation:(id)a0;

@end
