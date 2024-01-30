@interface _MFMailRecipientTextField : UITextField

@property (readonly, nonatomic) BOOL isShowingDictationPlaceholder;

- (void)removeDictationResultPlaceholder:(id)a0 willInsertResult:(BOOL)a1;
- (id)insertDictationResultPlaceholder;
- (void)_handleKeyUIEvent:(id)a0;
- (void)paste:(id)a0;
- (id)customOverlayContainer;
- (id)_previousKeyResponder;

@end
