@class NSTextAttachmentView, NSString, NSData, UIView, UIImage, NSFileWrapper;

@interface NSTextAttachment : NSObject <NSTextAttachmentContainer, NSSecureCoding> {
    NSData *_data;
    NSString *_uti;
    NSString *_cacheKey;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    double _layoutPadding;
    struct { unsigned char _allowsTextAttachmentView : 1; unsigned char _embeddingType : 4; unsigned char _standaloneAlignment : 3; unsigned char _allocatesTextContainer : 1; } _taFlags;
    NSFileWrapper *_fileWrapper;
    UIImage *_image;
    NSTextAttachmentView *_wrapperView;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *accessibilityLabel;
@property (retain) UIView *contentView;
@property (copy, nonatomic) NSData *contents;
@property (copy, nonatomic) NSString *fileType;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (retain, nonatomic) NSFileWrapper *fileWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (Class)textAttachmentViewProviderClassForFileType:(id)a0;
+ (void)registerTextAttachmentViewProviderClass:(Class)a0 forFileType:(id)a1;
+ (Class)textAttachmentClassForFileType:(id)a0;
+ (void)registerTextAttachmentClass:(Class)a0 forFileType:(id)a1;
+ (id)imageCache;

- (id)_image;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void)placeView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentView:(id)a2 characterIndex:(unsigned long long)a3 layoutManager:(id)a4;
- (id)init;
- (id)viewProviderForParentView:(id)a0 characterIndex:(unsigned long long)a1 layoutManager:(id)a2;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_imageForUTI_iOS:(id)a0;
- (void)_drawInAlignedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3 applicationFrameworkContext:(long long)a4;
- (id)contents;
- (void)dealloc;
- (id)_cacheKey;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setFileType:(id)a0;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1 characterIndex:(unsigned long long)a2;
- (void)setStandaloneAlignment:(long long)a0;
- (void)setAllowsTextAttachmentView:(BOOL)a0;
- (void)_setAllocatesTextContainer:(BOOL)a0;
- (void)_invalidateWrapperView;
- (BOOL)allowsTextAttachmentView;
- (id)initWithFileWrapper:(id)a0;
- (void)setLineLayoutPadding:(double)a0;
- (Class)textAttachmentViewProviderClass;
- (void)setDrawingBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingBounds;
- (id)viewProviderForParentView:(id)a0 location:(id)a1 textContainer:(id)a2;
- (void)placeView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inParentView:(id)a2 location:(id)a3 textContainer:(id)a4 applicationFrameworkContext:(long long)a5;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (id)fileType;
- (void)setContents:(id)a0;
- (long long)embeddingType;
- (void)setEmbeddingType:(long long)a0;
- (id)attachmentCell;
- (void)detachView:(id)a0 fromParentView:(id)a1;
- (BOOL)usesTextAttachmentView;
- (void)setImage:(id)a0;
- (id)image;
- (double)lineLayoutPadding;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;
- (void)encodeWithCoder:(id)a0;
- (long long)standaloneAlignment;
- (BOOL)_allocatesTextContainer;

@end
