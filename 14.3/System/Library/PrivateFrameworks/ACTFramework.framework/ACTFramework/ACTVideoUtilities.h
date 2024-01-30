@interface ACTVideoUtilities : NSObject

+ (BOOL)processVideo:(id)a0 outputURL:(id)a1 perFrameHandler:(id /* block */)a2 options:(id)a3 error:(id *)a4;
+ (id)findMotionInVideo:(id)a0 options:(id)a1;

@end
