@interface SBGuidedAccessListener : NSObject

@property (nonatomic) BOOL isGuidedAccessActive;

+ (id)sharedGuidedAccessListener;

- (id)init;
- (void)guidedAccessWasActivated;
- (void)guidedAccessWasDeactivated;

@end
