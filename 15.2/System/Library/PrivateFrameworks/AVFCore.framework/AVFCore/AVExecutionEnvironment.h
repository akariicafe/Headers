@class NSString;

@interface AVExecutionEnvironment : NSObject

@property (readonly) NSString *platformIdentifier;

+ (void)initialize;
+ (id)currentPlatformIdentifier;
+ (void)setPlatformIdentifier:(id)a0 forQueue:(id)a1;
+ (id)sharedExecutionEnvironment;
+ (void)resetPlatformIdentifierForQueue:(id)a0;

@end
