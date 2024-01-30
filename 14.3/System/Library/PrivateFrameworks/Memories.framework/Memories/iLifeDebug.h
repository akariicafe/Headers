@interface iLifeDebug : NSObject

+ (void)loadOnce;
+ (id)debugAssertBehaviorFilePath;
+ (void)writeDebugAssertBehaviorStringToDisk:(id)a0;
+ (void)removeDebugAssertBehaviorFile;
+ (void)writeDebugAssertBehaviorValueToDisk:(int)a0;
+ (void)evaluateDebugAssertBehaviorSettings;
+ (void)readDebugAssertBehaviorFromDisk;
+ (BOOL)handledAsDebugAssertBehaviorURL:(id)a0;
+ (void)drawViewBorder:(id)a0 withColor:(id)a1;
+ (void)drawBorder:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1;

@end
