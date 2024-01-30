@class NSString, WKContentView;

@interface WKDateTimePicker : NSObject <WKFormControl, UIContextMenuInteractionDelegate> {
    struct RetainPtr<UIDatePicker> { void *m_ptr; } _datePicker;
    NSString *_formatString;
    struct RetainPtr<NSString> { void *m_ptr; } _initialValue;
    double _initialValueAsNumber;
    BOOL _shouldRemoveTimeZoneInformation;
    BOOL _isTimeInput;
    WKContentView *_view;
    struct CGPoint { double x; double y; } _interactionPoint;
    struct RetainPtr<WKDateTimeContextMenuViewController> { void *m_ptr; } _viewController;
    struct RetainPtr<UIContextMenuInteraction> { void *m_ptr; } _dateTimeContextMenuInteraction;
    BOOL _presenting;
    BOOL _preservingFocus;
}

@property (readonly, nonatomic) NSString *calendarType;
@property (readonly, nonatomic) double hour;
@property (readonly, nonatomic) double minute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ok:(id)a0;
- (void).cxx_destruct;
- (void)reset:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)dealloc;
- (void)removeContextMenuInteraction;
- (id)viewController;
- (id)contextMenuInteraction:(id)a0 previewForHighlightingMenuWithConfiguration:(id)a1;
- (void)setHour:(long long)a0 minute:(long long)a1;
- (id)controlView;
- (long long)_timeZoneOffsetFromGMT:(id)a0;
- (void)_dateChangedSetAsString;
- (void)_dateChangedSetAsNumber;
- (void)_dateChangeHandler:(id)a0;
- (id)_sanitizeInputValueForFormatter:(id)a0;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)ensureContextMenuInteraction;
- (id).cxx_construct;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (BOOL)shouldPresentGregorianCalendar:(const struct FocusedElementInformation { struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x0; struct ElementContext { struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x0; struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x0; } x1; struct ObjectIdentifier<WebCore::DocumentIdentifierType> { unsigned long long x0; } x2; struct ObjectIdentifier<WebCore::ElementIdentifierType> { unsigned long long x0; } x3; } x1; struct IntPoint { int x0; int x1; } x2; double x3; double x4; double x5; double x6; BOOL x7; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x8; BOOL x9; struct IntRect { struct IntPoint { int x0; int x1; } x0; struct IntSize { int x0; int x1; } x1; } x10; BOOL x11; BOOL x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; unsigned char x18; int x19; unsigned char x20; unsigned char x21; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x22; struct Vector<WebKit::OptionItem, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct OptionItem *x0; unsigned int x1; unsigned int x2; } x23; int x24; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x25; double x26; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x27; BOOL x28; BOOL x29; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x0; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 3; unsigned int x5 : 26; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; } x30; int x31; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x32; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x33; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl *x0; } x0; } x34; unsigned long long x35; BOOL x36; struct Vector<WebCore::Color, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct Color *x0; unsigned int x1; unsigned int x2; } x37; BOOL x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; unsigned long long x43; } *)a0;
- (void)setDateTimePickerToInitialValue;
- (struct RetainPtr<NSDateFormatter> { void *x0; })dateFormatterForPicker;
- (void)showDateTimePicker;
- (id)initWithView:(id)a0 datePickerMode:(long long)a1;
- (long long)datePickerStyle;
- (void)_dateChanged;

@end
