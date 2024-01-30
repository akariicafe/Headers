@class PXSharedLibraryParticipantDataSource;

@interface PXSharedLibraryParticipantDataSourceManager : PXSectionedDataSourceManager <PXSharedLibraryMutableParticipantDataSourceManager>

@property (readonly, nonatomic) PXSharedLibraryParticipantDataSource *dataSource;

+ (id)aggregatedDataSource;
+ (id)aggregatedDataSourceWithParticipants:(id)a0;

- (id)createInitialDataSource;
- (void)performChanges:(id /* block */)a0;
- (void)addParticipants:(id)a0;
- (void)resumeChangeDelivery:(id)a0;
- (id)pauseChangeDeliveryWithTimeout:(double)a0 identifier:(id)a1;
- (void)removeParticipantAtIndex:(unsigned long long)a0;
- (void)replaceDataSourceWithDataSource:(id)a0;

@end
