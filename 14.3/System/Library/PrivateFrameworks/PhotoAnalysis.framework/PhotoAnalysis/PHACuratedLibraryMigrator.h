@class NSString;

@interface PHACuratedLibraryMigrator : NSObject <PHAGraphRegistration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)graphUpdateDidStop;
- (void)graphUpdateIsConsistent;
- (BOOL)wantsGraphUpdateNotifications;
- (BOOL)wantsLiveGraphUpdates;
- (void)graphUpdateMadeProgress:(double)a0;
- (void)delayMigrateCuratedLibraryActivity:(id)a0;
- (void)migrateCuratedLibraryWithActivity:(id)a0 executive:(id)a1;

@end
