@class NSURL;

@interface KNEmptyMovieFileGenerator : NSObject {
    double _duration;
}

@property (readonly, nonatomic) NSURL *generatedFileURL;

- (void).cxx_destruct;
- (id)init;
- (id)initWithGeneratedFileURL:(id)a0 duration:(double)a1;
- (void)generateFileWithCompletionHandler:(id /* block */)a0;

@end
