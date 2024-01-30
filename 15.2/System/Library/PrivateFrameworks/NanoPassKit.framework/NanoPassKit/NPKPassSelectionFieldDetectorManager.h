@class NSString, PKFieldDetector;
@protocol NPKPassSelectionFieldDetectorManagerDelegate, NPKPassesDataSource;

@interface NPKPassSelectionFieldDetectorManager : NSObject <PKFieldDetectorDelegate, PKFieldDetectorObserver, NPKPassesDataSourceObserver> {
    PKFieldDetector *_fieldDetector;
    BOOL _fieldDetectEnabled;
}

@property (nonatomic) BOOL fieldDetectEnabled;
@property (weak, nonatomic) id<NPKPassSelectionFieldDetectorManagerDelegate> delegate;
@property (weak, nonatomic) id<NPKPassesDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldEnableFieldDetectWithPasses:(id)a0;

- (id)initWithDataSource:(id)a0;
- (BOOL)fieldDetectorShouldProcessFieldEvents:(id)a0;
- (void)fieldDetectorDidEnterField:(id)a0 withProperties:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDataSource:(id)a0 delegate:(id)a1;
- (void)passesDataSource:(id)a0 didAddPasses:(id)a1;
- (void)passesDataSourceDidReorderPasses:(id)a0;
- (void)passesDataSource:(id)a0 didRemovePasses:(id)a1;
- (void)passesDataSource:(id)a0 didUpdatePasses:(id)a1;
- (void)passesDataSourceDidReloadPasses:(id)a0;
- (id)initWithDataSource:(id)a0 delegate:(id)a1 fieldDetector:(id)a2;
- (id)_applicablePassUniqueIDsWithFieldProperties:(id)a0;

@end
