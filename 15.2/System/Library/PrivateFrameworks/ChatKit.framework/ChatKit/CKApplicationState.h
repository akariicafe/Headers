@interface CKApplicationState : NSObject

@property (class, readonly, nonatomic) BOOL isActive;
@property (class, readonly, nonatomic) BOOL isBackground;
@property (class, readonly, nonatomic) BOOL isResizing;

+ (BOOL)isWindowForegroundActive:(id)a0;
+ (BOOL)_isUIExtension;
+ (void)setActive:(BOOL)a0;

@end
