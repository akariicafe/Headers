@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification

@property (copy, nonatomic) NSSet *updatedAssets;

+ (id)notificationWithChangedAssets:(id)a0;

- (id)userInfo;
- (id)description;
- (void).cxx_destruct;
- (id)_init;
- (id)name;
- (id)_initWithChangedObjects:(id)a0;
- (id)object;

@end
