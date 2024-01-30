@class NSURL, UIImage;

@interface UIActivityItemURLRep : NSObject

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) UIImage *thumbnail;
@property (nonatomic) long long attachmentURLType;

- (BOOL)isFileURL;
- (id)scheme;
- (void).cxx_destruct;

@end
