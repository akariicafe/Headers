@interface PLVideoTranscoder : NSObject

+ (id)generatePosterFrameForAVAsset:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
+ (id)generatePosterFrameForVideoAtURL:(id)a0 maxSize:(struct CGSize { double x0; double x1; })a1 error:(id *)a2;
+ (void)transcodeVideo:(id)a0 outputURL:(id)a1 presetName:(id)a2 outputFileType:(id)a3 metadata:(id)a4 completionHandler:(id /* block */)a5;
+ (void)transcodeVideoWithObjectBuilder:(id)a0 outputURL:(id)a1 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 presetName:(id)a4 outputFileType:(id)a5 metadata:(id)a6 completionHandler:(id /* block */)a7;

@end
