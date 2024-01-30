@class NSString, _SFFluidProgressView, _SFNavigationBar;

@interface _SFNavigationBarItem : NSObject {
    BOOL _temporarilySuppressText;
    _SFNavigationBar *_navigationBar;
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
@property (readonly, nonatomic) BOOL showsTranslationAvailabilityText;
@property (readonly, nonatomic) BOOL showsReaderAvailabilityText;
@property (nonatomic) BOOL overrideBarStyleForSecurityWarning;
@property (retain, nonatomic) _SFFluidProgressView *progressView;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (nonatomic) BOOL showsNotSecureAnnotation;
@property (nonatomic) BOOL hasFocusedSensitiveFieldOnCurrentPage;

- (void)setShowsReaderButton:(BOOL)a0 showsAvailabilityText:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (void)setShowsTranslationButton:(BOOL)a0 showsAvailabilityText:(BOOL)a1;
- (void)setTemporarilySuppressText:(BOOL)a0;
- (void)setShowsNotSecureAnnotation:(BOOL)a0 hasFocusedSensitiveField:(BOOL)a1;
- (void)setText:(id)a0 textWhenExpanded:(id)a1 startIndex:(unsigned long long)a2;

@end
