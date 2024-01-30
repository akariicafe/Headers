@class PXPlacesSnapshotFactory, NSObject;
@protocol OS_dispatch_queue;

@interface PXPlacesSearchProvider : NSObject

@property (retain, nonatomic) PXPlacesSnapshotFactory *factory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (void).cxx_destruct;
- (id)init;
- (void)requestMapSnapshotForQuery:(id)a0 ofSize:(struct CGSize { double x0; double x1; })a1 traitCollectionForSnapshot:(id)a2 completion:(id /* block */)a3;

@end
