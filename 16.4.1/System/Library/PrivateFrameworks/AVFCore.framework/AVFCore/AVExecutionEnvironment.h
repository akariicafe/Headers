@class NSString;

@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString *platformIdentifier;

+ (void)initialize;
+ (void)resetPlatformIdentifierForQueue:(id)a0;
+ (void)setPlatformIdentifier:(id)a0 forQueue:(id)a1;
+ (id)sharedExecutionEnvironment;
+ (id)currentPlatformIdentifier;

@end
