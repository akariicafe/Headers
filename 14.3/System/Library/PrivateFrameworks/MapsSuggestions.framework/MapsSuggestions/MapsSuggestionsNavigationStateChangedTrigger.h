@class NSString;

@interface MapsSuggestionsNavigationStateChangedTrigger : MapsSuggestionsBaseTrigger <MNNavigationServiceObserver> {
    BOOL _isNavigating;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
