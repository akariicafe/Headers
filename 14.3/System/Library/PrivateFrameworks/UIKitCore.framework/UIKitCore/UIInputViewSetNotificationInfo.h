@class NSDictionary;

@interface UIInputViewSetNotificationInfo : NSObject

@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSDictionary *privateUserInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } beginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } endFrame;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long options;
@property (nonatomic) BOOL changedAccessoryOnly;
@property (nonatomic) BOOL assistantOnScreenOnly;
@property (nonatomic) BOOL forceNotification;
@property (nonatomic) BOOL wasCausedRemotely;
@property (nonatomic) BOOL dueToRotation;
@property (nonatomic) struct CGPoint { double x; double y; } beginCenter;
@property (nonatomic) struct CGPoint { double x; double y; } endCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;

+ (id)info;

- (id)init;
- (void)populateWithAnimationStyle:(id)a0;
- (BOOL)containsChange;
- (void)populateStartInfoWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)populateEndInfoWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)logGeometry;
- (id)inverseInfo;
- (id)rotationUserInfo;

@end
