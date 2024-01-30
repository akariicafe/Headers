@class NSString;
@protocol SGContactSuggestionDelegate;

@interface SGContactSuggestion : SGContactSuggestionBase <CNContactViewControllerDelegate>

@property (weak, nonatomic) id<SGContactSuggestionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void).cxx_destruct;
- (id)suggestionImage;
- (id)suggestionImageSGView;
- (id)suggestionPrimaryAction;

@end
