@class NSArray;

@interface RTDefaultsManagerNotificationDefaultsChanged : RTNotification

@property (readonly, nonatomic) NSArray *updatedKeys;

- (id)initWithUpdatedKeys:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
