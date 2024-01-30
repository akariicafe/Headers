@protocol BKEnrollTouchIDOperationDelegate;

@interface BKEnrollTouchIDOperation : BKEnrollOperation {
    struct { int count; int capa; struct **items; int unusedImageCount; int componentCount; int componentCapa; int bestComponentIndex; int bestMapiComponentIndex; struct **components; short mapiNodeAddedIndex; short mapiNodeRemovedIndex; int updateCount; BOOL structureIsInconsistent; } _compSet;
}

@property (weak, nonatomic) id<BKEnrollTouchIDOperationDelegate> delegate;

- (id)initWithDevice:(id)a0;
- (BOOL)startWithError:(id *)a0;
- (void)homeButtonPressed:(unsigned long long)a0;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (void)dealloc;
- (void)enrollResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (id)createEnrollProgressInfo:(unsigned int)a0;

@end
