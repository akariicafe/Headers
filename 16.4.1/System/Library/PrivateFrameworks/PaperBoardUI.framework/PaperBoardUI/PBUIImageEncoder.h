@class NSURL, PBUIImageOnDiskFormat;

@interface PBUIImageEncoder : NSObject

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) PBUIImageOnDiskFormat *format;

- (id)saveImage:(struct CGImage { } *)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 format:(id)a1;
- (id)saveUIImage:(id)a0 error:(id *)a1;
- (id)createUIImageWithError:(id *)a0;
- (void).cxx_destruct;
- (id)writeThenReadBackImage:(id)a0 error:(id *)a1;

@end
