@class UILongPressGestureRecognizer, NSMutableDictionary, NSString, UITapGestureRecognizer;
@protocol CKMessageEntryRichTextViewDelegate;

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate, UIGestureRecognizerDelegate>

@property (retain, nonatomic) NSMutableDictionary *mediaObjects;
@property (retain, nonatomic) NSMutableDictionary *pluginDisplayContainers;
@property (retain, nonatomic) NSMutableDictionary *composeImages;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic) BOOL allowCalloutActions;
@property (weak, nonatomic) id<CKMessageEntryRichTextViewDelegate> delegate;
@property (nonatomic) char balloonColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cut:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)paste:(id)a0;
- (void)copy:(id)a0;
- (id)attributedTextForCompositionText:(id)a0;
- (id)compositionText;
- (BOOL)isSingleLineDocument;
- (void).cxx_destruct;
- (id)pasteConfiguration;
- (void)dealloc;
- (void)textStorage:(id)a0 willProcessEditing:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3;
- (id)pasteboard;
- (id)_compositionFromSelection;
- (void)handleTapOrLongPress:(id)a0;
- (void)updateComposeImages;
- (id)composeImageForTransferGUID:(id)a0;
- (void)setCompositionText:(id)a0;
- (id)cachedPluginDisplayContainerForGUID:(id)a0;
- (id)cachedMediaObjectForTransferGUID:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)handlePastedString:(id)a0 toRange:(id)a1;
- (void)_showCustomInputView;
- (void)previewDidChange:(id)a0;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
