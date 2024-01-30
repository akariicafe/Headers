@interface BMDaemonGraphValidator : NSObject

+ (BOOL)isExecutionAllowedForGraph:(id)a0;
+ (BOOL)isStreamPublisherExecutable:(id)a0;
+ (BOOL)isFilterExecutable:(id)a0;
+ (id)allowedKeyPaths;

@end
