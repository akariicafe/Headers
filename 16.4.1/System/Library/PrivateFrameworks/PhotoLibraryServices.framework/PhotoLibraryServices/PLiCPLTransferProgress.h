@interface PLiCPLTransferProgress : NSObject

@property (nonatomic) unsigned long long notUploadedPhotosCount;
@property (nonatomic) unsigned long long notUploadedVideosCount;
@property (nonatomic) unsigned long long notUploadedItemsCount;

- (id)description;

@end
