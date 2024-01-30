@class NSURL;

@interface URLDecodingResult : NSObject

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) long long urlDecodingStateInternal;

- (void).cxx_destruct;

@end
