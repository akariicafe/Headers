@interface AppStoreKitInternal.UpdatesPresenter : AppStoreKitInternal.BasePresenter {
    void /* unknown type, empty encoding */ onUpdatesDataChanged;
    void /* unknown type, empty encoding */ onPerformAction;
    void /* unknown type, empty encoding */ onShowWhatsNew;
    void /* unknown type, empty encoding */ onUpdateAllChanged;
    void /* unknown type, empty encoding */ updateStore;
    void /* unknown type, empty encoding */ automaticUpdates;
    void /* unknown type, empty encoding */ appStateController;
    void /* unknown type, empty encoding */ isAppleSiliconSupportEnabled;
    void /* unknown type, empty encoding */ isRosettaAvailable;
    void /* unknown type, empty encoding */ hasLoaded;
    void /* unknown type, empty encoding */ canUpdateBadgeCounts;
    void /* unknown type, empty encoding */ isUpdateAllEnabled;
    void /* unknown type, empty encoding */ pendingUpdates;
    void /* unknown type, empty encoding */ recentUpdates;
    void /* unknown type, empty encoding */ haveDoneInitialUpdatesFetch;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ expandedUpdates;
    void /* unknown type, empty encoding */ appStateControllerReady;
    void /* unknown type, empty encoding */ organizationQueue;
    void /* unknown type, empty encoding */ transitionQueue;
    void /* unknown type, empty encoding */ currentTransitionContext;
    void /* unknown type, empty encoding */ numberFormatter;
    void /* unknown type, empty encoding */ lastServerRefreshTime;
    void /* unknown type, empty encoding */ includeUpdateAllInPendingUpdates;
    void /* unknown type, empty encoding */ externalPendingUpdatesSectionIndex;
    void /* unknown type, empty encoding */ externalRecentlyUpdatedSectionIndex;
}

- (void)updateStoreDidChange;

@end
