@class PHCollection, PHFetchResult;

@interface PXSidebarItemChildInfo : NSObject

@property (readonly, nonatomic) PHCollection *collection;
@property (readonly, nonatomic) PHFetchResult *fetchResult;
@property (readonly, nonatomic) long long childIndexInFetchResult;

- (void).cxx_destruct;
- (id)initWithListItem:(id)a0 dataSection:(id)a1 childIndex:(long long)a2;

@end
