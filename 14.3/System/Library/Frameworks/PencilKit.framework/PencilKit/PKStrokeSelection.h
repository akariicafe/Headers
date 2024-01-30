@class PKStrokeSelectionImage, NSArray, NSOrderedSet, NSSet, PKDrawing, PKStroke, NSString;

@interface PKStrokeSelection : NSObject <NSItemProviderReading, NSItemProviderWriting>

@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@property (readonly, nonatomic) NSOrderedSet *strokes;
@property (readonly, nonatomic) NSSet *strokeIdentifiers;
@property (readonly, nonatomic) PKStroke *lassoStroke;
@property (copy, nonatomic) PKStrokeSelectionImage *strokeImage;
@property (readonly, nonatomic) PKDrawing *drawing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)strokeSelectionFromData:(id)a0;

- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsWithoutLasso;
- (BOOL)containsBitmapData;
- (id)strokeDataForSelection;
- (id)legacyStrokeDataForSelection;
- (void)generateImageWithConfig:(id)a0 fullSizeConfig:(id)a1 withCompletion:(id /* block */)a2;
- (id)_newDrawingWithStrokes;
- (id)initWithStrokes:(id)a0 lassoStroke:(id)a1 drawing:(id)a2;
- (id)imageDataForSelection;

@end
