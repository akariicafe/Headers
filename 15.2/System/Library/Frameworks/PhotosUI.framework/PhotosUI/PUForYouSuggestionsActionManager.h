@class NSString, NSMutableDictionary;

@interface PUForYouSuggestionsActionManager : PUAssetActionManager <PUForYouSuggestionActionPerformerDelegate> {
    NSMutableDictionary *_performersByAsset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)actionPerformerForSimpleActionType:(unsigned long long)a0 onAssetsByAssetCollection:(id)a1;
- (BOOL)canPerformAction:(unsigned long long)a0 onAllAssetsByAssetCollection:(id)a1;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAllAssetsByAssetCollection:(id)a1;
- (BOOL)canPerformActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (BOOL)shouldEnableActionType:(unsigned long long)a0 onAsset:(id)a1 inAssetCollection:(id)a2;
- (void)forYouSuggestionActionPerformerDidFinish:(id)a0;
- (void)forYouSuggestionActionPerformerDidBegin:(id)a0;

@end
