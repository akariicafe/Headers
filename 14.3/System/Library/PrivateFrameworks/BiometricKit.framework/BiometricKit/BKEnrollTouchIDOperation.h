@class BiometricKitStatistics;
@protocol BKEnrollTouchIDOperationDelegate;

@interface BKEnrollTouchIDOperation : BKEnrollOperation {
    BiometricKitStatistics *_statistics;
    struct { int count; int capa; struct **items; int unusedImageCount; int componentCount; int componentCapa; int bestComponentIndex; int bestMapiComponentIndex; struct **components; short mapiNodeAddedIndex; short mapiNodeRemovedIndex; int updateCount; BOOL structureIsInconsistent; } _compSet;
}

@property (weak, nonatomic) id<BKEnrollTouchIDOperationDelegate> delegate;

- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (void)enrollResult:(id)a0 client:(unsigned long long)a1;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)homeButtonPressed:(unsigned long long)a0;
- (BOOL)startWithError:(id *)a0;
- (id)createEnrollProgressInfo:(unsigned int)a0;

@end
