@class _MKPlaceActionButtonController;

@interface MUPlaceActionControlledItemViewModel : MUActionRowItemViewModel {
    _MKPlaceActionButtonController *_actionButtonController;
}

- (id)symbolName;
- (BOOL)isEnabled;
- (id)titleText;
- (void).cxx_destruct;
- (void)performWithPresentationOptions:(id)a0;
- (id)initWithPlaceActionController:(id)a0;

@end
