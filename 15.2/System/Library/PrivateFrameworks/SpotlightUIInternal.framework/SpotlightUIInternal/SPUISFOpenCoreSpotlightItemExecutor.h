@class NSString;

@interface SPUISFOpenCoreSpotlightItemExecutor : SPUICommandExecutor <SearchUICommandProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)spotlightUserActivityWithIdentifier:(id)a0 queryString:(id)a1;
+ (id)spotlightUserActivityWithIdentifier:(id)a0 actionIdentifier:(id)a1 queryString:(id)a2;

- (void)getUserActivityForCommand:(id)a0 withHandler:(id /* block */)a1;

@end
