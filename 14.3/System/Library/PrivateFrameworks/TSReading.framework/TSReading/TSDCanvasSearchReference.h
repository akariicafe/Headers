@class TSDDrawableInfo, NSArray, NSString, TSKDocumentRoot;
@protocol TSDCanvasSelection, TSKAnnotation;

@interface TSDCanvasSearchReference : NSObject <TSKSearchReference> {
    id<TSDCanvasSelection> mCanvasSelection;
    TSDDrawableInfo *mDrawableInfo;
    TSKDocumentRoot *mDocumentRoot;
}

@property (nonatomic) struct CGPoint { double x; double y; } searchReferencePoint;
@property (retain, nonatomic) NSArray *findHighlights;
@property (nonatomic) BOOL pulseHighlight;
@property (nonatomic) BOOL autohideHighlight;
@property (retain, nonatomic) id<TSKAnnotation> annotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchReferenceWithDrawableInfo:(id)a0;

- (id)model;
- (id)selection;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithDrawableInfo:(id)a0;
- (id)drawableInfo;
- (id)commandForReplacingWithString:(id)a0 options:(unsigned long long)a1;
- (id)searchReferenceForReplacingWithString:(id)a0 options:(unsigned long long)a1 authorCreatedWithCommand:(id *)a2;
- (id)searchReferenceStart;
- (id)searchReferenceEnd;
- (BOOL)isReplaceable;

@end
