@interface RPAudioMixUtility : NSObject

+ (id)tempFileURL;
+ (void)mixAudioForMovie:(id)a0 finalMovieURL:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)mixAudioForMovie:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
