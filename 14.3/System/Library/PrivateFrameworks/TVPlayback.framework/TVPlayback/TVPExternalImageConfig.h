@class NSURL, NSString;

@interface TVPExternalImageConfig : NSObject

@property (nonatomic) double imageInterval;
@property (nonatomic) long long imageCount;
@property (copy, nonatomic) NSURL *baseURL;
@property (nonatomic) BOOL usesOneBasedImageIndexes;
@property (copy, nonatomic) NSString *imageNameFormatString;
@property (copy, nonatomic) NSString *version;

- (void).cxx_destruct;

@end
