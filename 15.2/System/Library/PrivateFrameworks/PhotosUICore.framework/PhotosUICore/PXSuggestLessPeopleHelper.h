@class NSString;
@protocol PXSuggestLessPeopleHelperDelegate;

@interface PXSuggestLessPeopleHelper : NSObject <PXSuggestLessPeopleSelectionViewControllerDelegate, PXSuggestLessPeopleOptionSelectionViewControllerDelegate>

@property (weak, nonatomic) id<PXSuggestLessPeopleHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dismissViewController:(id)a0 completionHandler:(id /* block */)a1;
- (void)suggestLessPeopleFromAssets:(id)a0 completionHandler:(id /* block */)a1;
- (void)suggestLessPeople:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeActionWithCompletionHandler:(id /* block */)a0;
- (void)didSelectPersonToSuggestLess:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)completeOptionSelectionActionWithCompletionHandler:(id /* block */)a0;
- (void)dismissOptionSelectionViewController:(id)a0 completionHandler:(id /* block */)a1;
- (void)suggestLessPeople:(id)a0 withSuggestLessOption:(unsigned long long)a1 dismissViewController:(id)a2 completionHandler:(id /* block */)a3;
- (void)_showSuggestLessPeopleSelectionForPeople:(id)a0 completionHandler:(id /* block */)a1;
- (void)_showSuggestLessOptionForPerson:(id)a0 completionHandler:(id /* block */)a1;
- (void)_suggestLessPeople:(id)a0 withSuggestLessOption:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
