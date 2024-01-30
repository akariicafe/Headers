@class _SFFluidProgressView, NSString, NSHashTable, WBSFluidProgressController;
@protocol WBSFluidProgressStateSource;

@interface SFNavigationBarItem : NSObject {
    BOOL _temporarilySuppressText;
    NSHashTable *_observers;
    BOOL _showsReaderAvailabilityTextWhenReplacingDomain;
    BOOL _showsTranslationAvailabilityTextWhenReplacingDomain;
}

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *textWhenExpanded;
@property (readonly, nonatomic) unsigned long long startIndexOfTextInExpandedText;
@property (copy, nonatomic) NSString *customPlaceholderText;
@property (nonatomic) BOOL showsLockIcon;
@property (nonatomic) BOOL showsSearchIndicator;
@property (nonatomic) BOOL showsStopReloadButtons;
@property (nonatomic) BOOL stopReloadButtonShowsStop;
@property (nonatomic) BOOL showsPageFormatButton;
@property (nonatomic) BOOL readerButtonSelected;
@property (nonatomic) BOOL showsReaderButton;
@property (nonatomic) BOOL showsTranslationButton;
@property (nonatomic) BOOL showsTranslationIcon;
@property (nonatomic) BOOL showsVoiceSearchButton;
@property (readonly, nonatomic) BOOL showsExtensionsAvailabilityText;
@property (retain, nonatomic) NSString *extensionsAvailabilityText;
@property (nonatomic) BOOL needsExtensionBadge;
@property (nonatomic) BOOL overrideBarStyleForSecurityWarning;
@property (retain, nonatomic) _SFFluidProgressView *progressView;
@property (retain, nonatomic) WBSFluidProgressController *fluidProgressController;
@property (weak) id<WBSFluidProgressStateSource> fluidProgressStateSource;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (nonatomic) BOOL showsNotSecureAnnotation;
@property (nonatomic) BOOL hasFocusedSensitiveFieldOnCurrentPage;
@property (readonly, nonatomic) BOOL menuButtonSelected;

- (void)setTemporarilySuppressText:(BOOL)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (BOOL)showsReaderAvailabilityTextForStyle:(long long)a0;
- (BOOL)showsTranslationAvailabilityTextForStyle:(long long)a0;
- (void)setShowsTranslationButton:(BOOL)a0 showsAvailabilityText:(BOOL)a1;
- (void)setShowsNotSecureAnnotation:(BOOL)a0 hasFocusedSensitiveField:(BOOL)a1;
- (BOOL)_showsAvailabilityTextForType:(long long)a0 style:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setText:(id)a0 textWhenExpanded:(id)a1 startIndex:(unsigned long long)a2;
- (void)setShowsReaderButton:(BOOL)a0 showsAvailabilityText:(BOOL)a1;

@end
