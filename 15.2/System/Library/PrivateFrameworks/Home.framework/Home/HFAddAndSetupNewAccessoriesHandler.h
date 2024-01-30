@interface HFAddAndSetupNewAccessoriesHandler : NSObject

@property (nonatomic) BOOL isAccessorySetupActive;

+ (id)sharedHandler;
+ (id)addAndSetupNewAccessoriesForHome:(id)a0 room:(id)a1;

- (id)init;

@end
