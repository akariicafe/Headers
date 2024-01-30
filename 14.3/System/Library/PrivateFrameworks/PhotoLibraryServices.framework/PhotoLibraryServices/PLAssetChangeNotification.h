@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification

@property (copy, nonatomic) NSSet *updatedAssets;

+ (id)notificationWithChangedAssets:(id)a0;

- (id)_initWithChangedObjects:(id)a0;
- (id)userInfo;
- (void).cxx_destruct;
- (id)object;
- (id)description;
- (id)_init;
- (id)name;

@end
