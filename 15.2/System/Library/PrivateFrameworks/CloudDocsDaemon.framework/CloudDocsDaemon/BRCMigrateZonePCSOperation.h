@class NSString, NSMutableArray;

@interface BRCMigrateZonePCSOperation : _BRCOperation <BRCOperationSubclass> {
    NSMutableArray *_interestingZoneIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldRetryForError:(id)a0;
- (void)_createCloudDocsZone:(id /* block */)a0;
- (void)_fetchZonesNeedingMigration:(id /* block */)a0;

@end
