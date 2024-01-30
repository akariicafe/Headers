@class NSDictionary, PLManagedAsset;

@interface PLCloudCommentsChangeNotification : PLContainerChangeNotification {
    NSDictionary *_userInfo;
}

@property (readonly, nonatomic) PLManagedAsset *asset;

+ (id)notificationWithAsset:(id)a0 snapshot:(id)a1;

- (id)userInfo;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)_contentRelationshipName;

@end
