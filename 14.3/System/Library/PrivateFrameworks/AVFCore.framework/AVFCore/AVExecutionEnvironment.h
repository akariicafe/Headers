@class NSString;

@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString *platformIdentifier;

+ (void)initialize;
+ (id)sharedExecutionEnvironment;
+ (id)currentPlatformIdentifier;
+ (void)resetPlatformIdentifierForQueue:(id)a0;
+ (void)setPlatformIdentifier:(id)a0 forQueue:(id)a1;

@end
