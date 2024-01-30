@class UABestAppSuggestionManager, NSString;

@interface UABestAppSuggestionManagerProxy : NSObject <UABestAppSuggestionManagerResponseProtocol>

@property (weak) UABestAppSuggestionManager *weakManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyBestAppsChanged:(id)a0 when:(id)a1 confidence:(double)a2;
- (void).cxx_destruct;

@end
