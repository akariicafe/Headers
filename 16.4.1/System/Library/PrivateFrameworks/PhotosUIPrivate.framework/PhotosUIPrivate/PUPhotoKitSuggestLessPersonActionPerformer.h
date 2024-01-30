@class PXSuggestLessPeopleHelper;

@interface PUPhotoKitSuggestLessPersonActionPerformer : PUPhotoKitActionPerformer <PXSuggestLessPeopleHelperDelegate> {
    PXSuggestLessPeopleHelper *_suggestLessPeopleHelper;
}

+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performUserInteractionTask;
- (void).cxx_destruct;
- (BOOL)suggestLessPeopleHelper:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)suggestLessPeopleHelper:(id)a0 presentViewController:(id)a1;

@end
