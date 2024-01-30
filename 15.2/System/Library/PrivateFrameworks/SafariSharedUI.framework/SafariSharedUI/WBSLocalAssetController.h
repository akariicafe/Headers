@class NSURL, NSObject, NSDate;
@protocol OS_dispatch_queue, WBSMobileAssetControllerDelegate;

@interface WBSLocalAssetController : NSObject <WBSMobileAssetControllerProtocol> {
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_queue;
    id<WBSMobileAssetControllerDelegate> _delegate;
}

@property (weak) id<WBSMobileAssetControllerDelegate> delegate;
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (readonly, nonatomic) double updateInterval;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)queryURL:(id /* block */)a0;

@end
