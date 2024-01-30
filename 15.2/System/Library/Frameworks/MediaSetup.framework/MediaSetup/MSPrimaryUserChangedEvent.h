@interface MSPrimaryUserChangedEvent : NSObject

@property (nonatomic) BOOL changedToHomeOwner;
@property (nonatomic) BOOL changedToUserNotInHome;
@property (nonatomic) BOOL isAutomatic;

- (id)initWithAccessory:(id)a0;

@end
