@interface ICWidget : NSObject

@property (class, readonly, nonatomic) ICWidget *shared;

- (void)reloadExtensionTimelines;
- (BOOL)hidesObject:(id)a0;
- (void)reloadExtensionTimelineForKind:(id)a0;

@end
