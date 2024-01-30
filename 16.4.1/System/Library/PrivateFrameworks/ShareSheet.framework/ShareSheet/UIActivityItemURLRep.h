@class NSURL, UIImage;

@interface UIActivityItemURLRep : NSObject

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) UIImage *thumbnail;
@property (nonatomic) long long attachmentURLType;

- (id)scheme;
- (void).cxx_destruct;
- (BOOL)isFileURL;

@end
