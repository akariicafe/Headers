@interface SKBaseManager : NSObject

@property (readonly, nonatomic) BOOL supportsCocoa;

+ (id)sharedManager;
+ (id)defaultVisibleRoles;

- (id)init;
- (id)allDisks;

@end
