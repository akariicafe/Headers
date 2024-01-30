@interface NUCompositionUtilities : NSObject

+ (BOOL)isHDRComposition:(id)a0;
+ (BOOL)canRetainDolbyMetadata:(id)a0;
+ (BOOL)dumpComposition:(id)a0 toURL:(id)a1 error:(out id *)a2;
+ (BOOL)dumpComposition:(id)a0 withName:(id)a1;

@end
