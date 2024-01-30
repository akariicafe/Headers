@interface SBGuidedAccessListener : NSObject

@property (nonatomic) BOOL isGuidedAccessActive;

+ (id)sharedGuidedAccessListener;

- (void)guidedAccessWasActivated;
- (void)guidedAccessWasDeactivated;
- (id)init;

@end
