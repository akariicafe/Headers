@class NSString, NSMutableDictionary, WBSTranslationContext;
@protocol _SFTranslationTargetLocaleAlertControllerDelegate;

@interface _SFTranslationTargetLocaleAlertController : UIAlertController <_SFTranslationTargetLocaleAlertControllerDelegate> {
    WBSTranslationContext *_translationContext;
}

@property (retain, nonatomic) NSMutableDictionary *localeIdentifierToAlertActionMap;
@property (weak, nonatomic) id<_SFTranslationTargetLocaleAlertControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)translationAlertControllerWithDelegate:(id)a0 localeIdentifiers:(id)a1;

- (void).cxx_destruct;
- (void)_setUpWithLocaleIdentifiers:(id)a0;
- (void)translationAlertController:(id)a0 didSelectLocale:(id)a1;
- (void)translationAlertController:(id)a0 validateTargetLocale:(id)a1 completionHandler:(id /* block */)a2;
- (void)_translationAvailabilityDidChange:(id)a0;
- (void)translationAvailabilityDidChange;
- (id)initWithTranslationContext:(id)a0;
- (void)configurePopoverWithSourceInfo:(id)a0;

@end
