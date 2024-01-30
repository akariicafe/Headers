@class NSPointerArray;

@interface VUICurrentSiriNavControllerContainer : NSObject

@property (retain, nonatomic) NSPointerArray *activeNavigationControllers;

+ (id)sharedInstance;
+ (BOOL)isRunningInSiriPluggin;

- (void).cxx_destruct;
- (id)init;
- (id)currentSiriNavController;
- (void)setCurrentSiriNavController:(id)a0;

@end
