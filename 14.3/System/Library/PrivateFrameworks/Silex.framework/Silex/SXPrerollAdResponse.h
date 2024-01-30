@class NSURL;
@protocol SXPrerollAdMetadata;

@interface SXPrerollAdResponse : SXAdResponse

@property (retain, nonatomic) NSURL *videoURL;
@property (nonatomic) double skipDuration;
@property (retain, nonatomic) id<SXPrerollAdMetadata> prerollAdMetadata;

- (void).cxx_destruct;

@end
