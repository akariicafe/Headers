@class NSArray;

@interface RTDefaultsManagerNotificationDefaultsChanged : RTNotification

@property (readonly, nonatomic) NSArray *updatedKeys;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUpdatedKeys:(id)a0;

@end
