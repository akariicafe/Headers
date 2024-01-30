@class NSObject;
@protocol FPCollectionDataSourceDelegate, FPXEnumerator, OS_dispatch_queue;

@interface _FPAccessControlDataSource : NSObject <FPCollectionDataSource> {
    id<FPXEnumerator> _enumerator;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) BOOL hasMoreIncoming;
@property (weak, nonatomic) id<FPCollectionDataSourceDelegate> delegate;

- (id)initWithEnumerator:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)invalidate;
- (void)enumerationMightHaveResumed;
- (void)handleItems:(id)a0 nextPage:(id)a1;

@end
