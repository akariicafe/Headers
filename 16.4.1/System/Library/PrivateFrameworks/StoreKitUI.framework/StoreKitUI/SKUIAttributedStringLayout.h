@class NSShadow, NSString, NSAttributedString, NSStringDrawingContext;

@interface SKUIAttributedStringLayout : NSObject <SKUICachedLayout>

@property (readonly, nonatomic) NSAttributedString *attributedString;
@property (readonly, nonatomic) double baselineOffset;
@property (readonly, nonatomic) double firstBaselineOffset;
@property (readonly, nonatomic) struct CGSize { double width; double height; } boundingSize;
@property (readonly, nonatomic) long long numberOfLines;
@property (readonly, nonatomic) NSStringDrawingContext *stringDrawingContext;
@property (readonly, nonatomic) double topInset;
@property (readonly, nonatomic) BOOL usesTallCharacterSet;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsetsForShadow;
@property (readonly, nonatomic) NSShadow *shadow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLayoutRequest:(id)a0;

@end
