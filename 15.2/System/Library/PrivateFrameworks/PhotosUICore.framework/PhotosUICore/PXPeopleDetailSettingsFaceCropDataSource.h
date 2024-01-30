@class NSObject, PHFetchResult, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PXPeopleDetailSettingsFaceCropDataSource : NSObject

@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (retain, nonatomic) NSMutableDictionary *images;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *imagesIsolationQueue;

- (unsigned long long)numberOfAssets;
- (void).cxx_destruct;
- (id)init;
- (id)imageAtIndexPath:(id)a0;
- (id)nameAtIndexPath:(id)a0;

@end
