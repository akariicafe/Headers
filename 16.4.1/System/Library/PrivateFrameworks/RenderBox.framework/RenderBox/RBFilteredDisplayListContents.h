@class NSString;
@protocol RBDisplayListContents;

@interface RBFilteredDisplayListContents : NSObject <RBDisplayListContents> {
    struct objc_ptr<id<RBDisplayListContents>> { id<RBDisplayListContents> _p; } _base;
    struct Invertible { struct DisplayListPredicate { struct vector<RB::DisplayListPredicate::Term, 1UL, unsigned int> { unsigned char _p[24]; struct Term *_p; unsigned int _size; unsigned int _capacity; } _terms; } predicate; BOOL inverts_result; } _predicate;
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
