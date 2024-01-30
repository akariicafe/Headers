@class NSDictionary, PLManagedAsset;

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification {
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) PLManagedAsset *asset;

+ (id)notificationWithAsset:(id)a0 snapshot:(id)a1;

- (id)_contentRelationshipName;
- (id)userInfo;
- (void).cxx_destruct;
- (id)description;
- (id)name;

@end
