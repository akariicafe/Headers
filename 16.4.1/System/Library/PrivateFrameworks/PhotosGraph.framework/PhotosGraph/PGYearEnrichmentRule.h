@class NSString, NSObject;
@protocol PGHighlightItemModelReader, OS_os_log;

@interface PGYearEnrichmentRule : NSObject <PGHighlightItemEnrichmentRule>

@property (readonly, nonatomic) id<PGHighlightItemModelReader> modelReader;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)a0 sharingFilter:(unsigned short)a1 withGraph:(id)a2 neighborScoreComputer:(id)a3 usingBlock:(id /* block */)a4;
- (id)initWithModelReader:(id)a0 loggingConnection:(id)a1;
- (id)keyAssetForHighlightItemList:(id)a0 sharingFilter:(unsigned short)a1;
- (double)promotionScoreForHighlightItemList:(id)a0;

@end
