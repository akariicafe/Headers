@class NSString, NSURL;

@interface DEUpdaterURLParams : NSObject

@property (retain, nonatomic) NSString *distribution;
@property (retain, nonatomic) NSString *publicationURLSrc;
@property (retain, nonatomic) NSURL *publicationURL;
@property (retain, nonatomic) NSURL *downloadURLPrefix;

- (void).cxx_destruct;

@end
