@class NSString, NSMutableArray;

@interface BRCMigrateZonePCSOperation : _BRCOperation <BRCOperationSubclass> {
    NSMutableArray *_interestingZoneIDs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (BOOL)shouldRetryForError:(id)a0;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)_createCloudDocsZone:(id /* block */)a0;
- (void)_fetchZonesNeedingMigration:(id /* block */)a0;

@end
