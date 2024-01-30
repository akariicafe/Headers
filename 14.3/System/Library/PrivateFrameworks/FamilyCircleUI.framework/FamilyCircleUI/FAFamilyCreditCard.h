@class NSString, NSURL, UIImage;

@interface FAFamilyCreditCard : NSObject

@property (copy, nonatomic) NSString *details;
@property (copy, nonatomic) NSString *footer;
@property (copy, nonatomic) NSString *providerDescription;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *usageNotice;
@property (copy, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) UIImage *image;

- (void).cxx_destruct;

@end
