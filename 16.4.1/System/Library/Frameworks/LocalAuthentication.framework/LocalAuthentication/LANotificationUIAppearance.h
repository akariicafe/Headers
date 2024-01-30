@interface LANotificationUIAppearance : LANotificationOfBooleanState

@property (readonly, nonatomic) BOOL willAppear;
@property (readonly, nonatomic) BOOL didDisappear;
@property (readonly, nonatomic) BOOL isDisplayed;

- (void)newValue:(id)a0 oldValue:(id)a1 completionHandler:(id /* block */)a2;
- (id)darwinNotificationForBoolValue:(BOOL)a0;

@end
