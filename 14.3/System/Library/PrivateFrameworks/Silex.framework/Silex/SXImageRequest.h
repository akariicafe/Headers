@class NSString, NSURL;

@interface SXImageRequest : NSObject

@property (readonly, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) unsigned long long qualities;
@property (copy, nonatomic) id /* block */ loadingBlock;
@property (readonly, nonatomic) BOOL preserveColorspace;

- (void).cxx_destruct;
- (id)initWithImageIdentifier:(id)a0 imageQualities:(unsigned long long)a1 url:(id)a2 size:(struct CGSize { double x0; double x1; })a3 preserveColorspace:(BOOL)a4 loadingBlock:(id /* block */)a5;

@end
