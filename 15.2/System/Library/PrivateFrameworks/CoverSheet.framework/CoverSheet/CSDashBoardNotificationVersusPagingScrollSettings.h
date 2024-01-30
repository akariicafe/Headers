@interface CSDashBoardNotificationVersusPagingScrollSettings : PTSettings

@property (nonatomic) BOOL colorsBackground;
@property (nonatomic) double leadingInset;
@property (nonatomic) double trailingInset;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
