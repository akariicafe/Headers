@class NSOperation;
@protocol VUIImageLoadingOperation;

@interface VUIImageLoadContext : NSObject

@property (retain, nonatomic) NSOperation<VUIImageLoadingOperation> *imageLoadOperation;
@property (nonatomic) unsigned long long requestCount;

- (void).cxx_destruct;

@end
