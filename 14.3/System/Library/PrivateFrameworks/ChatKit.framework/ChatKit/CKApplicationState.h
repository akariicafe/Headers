@interface CKApplicationState : NSObject

@property (class, readonly, nonatomic) BOOL isActive;
@property (class, readonly, nonatomic) BOOL isBackground;
@property (class, readonly, nonatomic) BOOL isResizing;

+ (void)setActive:(BOOL)a0;
+ (BOOL)_isUIExtension;

@end
