@class CAMLibrarySelectionController;

@interface CAMAnalyticsSharedLibraryModeEvent : CAMAnalyticsEvent {
    CAMLibrarySelectionController *_librarySelectionController;
}

- (void)publish;
- (id)eventName;
- (void).cxx_destruct;
- (id)initWithLibrarySelectionController:(id)a0;

@end
