@class NSString, RBDisplayListInterpolator;
@protocol RBDisplayListContents;

@interface RBInterpolatedDisplayListContents : NSObject <RBDisplayListContents> {
    struct objc_ptr<RBDisplayListInterpolator *> { RBDisplayListInterpolator *_p; } _interp;
    float _progress;
    struct objc_ptr<id<RBDisplayListContents>> { id<RBDisplayListContents> _p; } _contents;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;
@property (readonly, copy, nonatomic) NSString *xmlDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodedObjectWithData:(id)a0 delegate:(id)a1 error:(id *)a2;

- (const void *)_rbContents;
- (void)drawInState:(struct _RBDrawingState { } *)a0;
- (void)renderInContext:(struct CGContext { } *)a0 options:(id)a1;
- (id)encodedDataForDelegate:(id)a0 error:(id *)a1;
- (const void *)_rbPredicate;
- (id).cxx_construct;
- (const void *)_rbXmlDocument;
- (void).cxx_destruct;

@end
