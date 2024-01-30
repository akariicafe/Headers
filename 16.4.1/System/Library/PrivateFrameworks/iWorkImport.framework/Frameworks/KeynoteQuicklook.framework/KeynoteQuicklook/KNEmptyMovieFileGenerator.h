@class NSURL;

@interface KNEmptyMovieFileGenerator : NSObject {
    double _duration;
}

@property (readonly, nonatomic) NSURL *generatedFileURL;

- (id)init;
- (void).cxx_destruct;
- (void)generateFileWithCompletionHandler:(id /* block */)a0;
- (id)initWithGeneratedFileURL:(id)a0 duration:(double)a1;

@end
