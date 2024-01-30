@class NSString, NSObject;
@protocol OS_os_log;

@interface MFSearchableIndex_iOS : EDSearchableIndex <EFLoggable, MFDiagnosticsGenerator>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logPowerEventWithIdentifier:(id)a0 eventData:(id)a1;
- (void)addSearchQueryCancelable:(id)a0;
- (void)_indexMessage:(id)a0 includeBody:(BOOL)a1 indexingType:(long long)a2;
- (void)removeSearchQueryCancelable:(id)a0;
- (void)indexMessages:(id)a0 includeBody:(BOOL)a1 indexingType:(long long)a2;
- (BOOL)isPluggedIn;
- (BOOL)shouldCancelSearchQuery;
- (id)powerObservable;
- (id)initWithName:(id)a0 dataSource:(id)a1 reasonProvider:(id)a2;

@end
