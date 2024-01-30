@class NSString, NSArray, NSOrderedSet, NSSet, PKDrawing, PKStrokeSelectionImage, PKStroke, NSDictionary, NSItemProvider;

@interface PKStrokeSelection : NSObject <NSItemProviderReading, NSItemProviderWriting>

@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@property (readonly, nonatomic) NSOrderedSet *strokes;
@property (readonly, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) PKStroke *lassoStroke;
@property (copy, nonatomic) PKStrokeSelectionImage *strokeImage;
@property (copy, nonatomic) PKStrokeSelectionImage *strokeImageWithHighlight;
@property (readonly, nonatomic) PKDrawing *drawing;
@property (copy, nonatomic) NSDictionary *externalElements;
@property (copy, nonatomic) NSItemProvider *externalElementsItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 drawingClass:(Class)a2 error:(id *)a3;
+ (id)strokeSelectionFromData:(id)a0 forDrawingClass:(Class)a1;
+ (id)strokeSelectionFromData:(id)a0;

- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void).cxx_destruct;
- (id)initWithStrokes:(id)a0 lassoStroke:(id)a1 drawing:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsWithoutLasso;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })externalElementsBounds;
- (BOOL)containsBitmapData;
- (id)strokeDataForSelection;
- (id)legacyStrokeDataForSelection;
- (void)generateImageWithConfig:(id)a0 fullSizeConfig:(id)a1 selectionInteraction:(id)a2 withCompletion:(id /* block */)a3;
- (id)_newDrawingWithStrokes;
- (struct CGImage { } *)newExternalElementsCGImageFromCGImage:(struct CGImage { } *)a0 withConfig:(id)a1 selectionInteraction:(id)a2 renderImage:(BOOL)a3;
- (id)initWithStrokes:(id)a0 externalElements:(id)a1 lassoStroke:(id)a2 drawing:(id)a3;
- (id)imageDataForSelection;

@end
