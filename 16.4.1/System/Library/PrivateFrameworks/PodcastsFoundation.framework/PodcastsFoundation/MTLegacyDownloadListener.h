@protocol MTLegacyDownloadManagerDelegate;

@interface MTLegacyDownloadListener : NSObject

@property (readonly, weak, nonatomic) id<MTLegacyDownloadManagerDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
