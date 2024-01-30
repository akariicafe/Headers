@class NSTextAttachmentView, NSString, UTType, NSData, UIView, UIImage, NSFileWrapper;
@protocol NSTextAttachmentCell;

@interface NSTextAttachment : NSObject <NSTextAttachmentLayout, NSTextAttachmentContainer, NSSecureCoding> {
    NSData *_data;
    UTType *_uti;
    NSString *_cacheKey;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    double _layoutPadding;
    struct { unsigned char _allowsTextAttachmentView : 1; unsigned char _embeddingType : 4; unsigned char _standaloneAlignment : 3; unsigned char _allocatesTextContainer : 1; unsigned char _prefersOldAttachmentBounds : 1; unsigned char _prefersOldImageForBounds : 1; unsigned char _cellWasExplicitlySet : 1; unsigned char _ignoresOrientation : 1; unsigned char _allowsEditingContents : 1; unsigned char _viewProviderPriority : 1; } _taFlags;
    NSFileWrapper *_fileWrapperForContents;
    UIImage *_image;
    NSTextAttachmentView *_wrapperView;
    id<NSTextAttachmentCell> _attachmentCell;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL _hasTextAttachmentViewCell;
@property (retain) UIView *contentView;
@property (copy, nonatomic) NSData *contents;
@property (copy, nonatomic) NSString *fileType;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (retain, nonatomic) NSFileWrapper *fileWrapper;
@property double lineLayoutPadding;
@property BOOL allowsTextAttachmentView;
@property (readonly) BOOL usesTextAttachmentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)imageCache;
+ (Class)textAttachmentClassForFileType:(id)a0;
+ (void)registerTextAttachmentClass:(Class)a0 forFileType:(id)a1;
+ (void)registerTextAttachmentViewProviderClass:(Class)a0 forFileType:(id)a1;
+ (Class)textAttachmentViewProviderClassForFileType:(id)a0;

- (id)fileType;
- (id)accessibilityLabel;
- (id)contents;
- (void)encodeWithCoder:(id)a0;
- (void)setFileType:(id)a0;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (id)initWithCoder:(id)a0;
- (id)_cacheKey;
- (void)setAccessibilityLabel:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;
- (void)setImage:(id)a0;
- (void)dealloc;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (id)image;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)init;
- (void)setContents:(id)a0;
- (id)_image;
- (id)attachmentCell;
- (void)detachView:(id)a0 fromParentView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingBounds;
- (long long)embeddingType;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (void)placeView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (void)setEmbeddingType:(long long)a0;
- (id)viewProviderForParentView:(id)a0 characterIndex:(unsigned long long)a1 layoutManager:(id)a2;
- (id)viewProviderForParentView:(id)a0 location:(id)a1 textContainer:(id)a2;
- (Class)textAttachmentViewProviderClass;
- (BOOL)_allocatesTextContainer;
- (long long)_characterIndexForLocation:(id)a0 textContainer:(id)a1;
- (void)_drawInAlignedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3 applicationFrameworkContext:(long long)a4;
- (id)_imageForUTType_iOS:(id)a0;
- (void)_invalidateWrapperView;
- (void)_setAllocatesTextContainer:(BOOL)a0;
- (void)_setupAPIPreferences;
- (void)_showAttachmentCell_iOS:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 characterIndex:(unsigned long long)a2;
- (void)_showWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3 applicationFrameworkContext:(long long)a4;
- (BOOL)allowsEditingContents;
- (BOOL)ignoresOrientation;
- (id)initWithFileWrapper:(id)a0;
- (void)placeView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentView:(id)a2 location:(id)a3 textContainer:(id)a4 applicationFrameworkContext:(long long)a5;
- (void)setAllowsEditingContents:(BOOL)a0;
- (void)setAttachmentCell:(id)a0;
- (void)setDrawingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIgnoresOrientation:(BOOL)a0;
- (void)setStandaloneAlignment:(long long)a0;
- (long long)standaloneAlignment;

@end
