@interface VCPLogManager : NSObject

@property (readonly) int logLevel;

+ (id)sharedLogManager;
+ (id)dateFormatter;

- (id)init;

@end
