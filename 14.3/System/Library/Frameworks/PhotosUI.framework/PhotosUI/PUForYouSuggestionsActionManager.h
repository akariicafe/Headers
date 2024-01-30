@class NSString, NSMutableDictionary;

@interface PUForYouSuggestionsActionManager : PUAssetActionManager <PUForYouSuggestionActionPerformerDelegate> {
    NSMutableDictionary *_performersByAsset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (id)init;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetsByAssetCollection:(id)a1;
- (BOOL)canPerformAction:(unsigned long long)a0 onAllAssetsByAssetCollection:(id)a1;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAllAssetsByAssetCollection:(id)a1;
- (void).cxx_destruct;
- (void)forYouSuggestionActionPerformerDidFinish:(id)a0;
- (void)forYouSuggestionActionPerformerDidBegin:(id)a0;

@end
