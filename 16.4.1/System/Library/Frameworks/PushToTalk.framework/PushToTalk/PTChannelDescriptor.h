@class NSURL, NSString, UIImage;

@interface PTChannelDescriptor : NSObject

@property (readonly, copy, nonatomic) NSURL *imageFileURL;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) UIImage *image;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 image:(id)a1;

@end
