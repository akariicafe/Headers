@interface PhotosUIApps.PhotosDetailsSharedWithYouWidgetViewModel : PhotosUIApps.PhotosDetailsWidgetViewModel <PXContentSyndicationAttributionInfoChangeDelegate> {
    void /* unknown type, empty encoding */ attributionInfo;
    void /* unknown type, empty encoding */ appAttributionModel;
    void /* unknown type, empty encoding */ _syndicationContactName;
    void /* unknown type, empty encoding */ _syndicationContactImage;
    void /* unknown type, empty encoding */ _syndicationSharedInAttributedTitle;
    void /* unknown type, empty encoding */ _syndicationAttributionInfoIsLoading;
    void /* unknown type, empty encoding */ _hasSyndicationAttributionInfo;
    void /* unknown type, empty encoding */ viewControllerForPresenting;
    void /* unknown type, empty encoding */ attributionIdentifier;
    void /* unknown type, empty encoding */ senderAppName;
    void /* unknown type, empty encoding */ axDescriptionForLoadingIndicator;
    void /* unknown type, empty encoding */ axDescriptionForContactImage;
    void /* unknown type, empty encoding */ axDescriptionForTextLabels;
    void /* unknown type, empty encoding */ axDescriptionForReplyButton;
}

- (void).cxx_destruct;
- (void)syndicationAttributionInfoDidChange:(id)a0;

@end
