@class TSPObjectContext;
@protocol TSPDataDownloadManagerDelegate;

@interface TSPDataDownloadManager : NSObject {
    TSPObjectContext *_context;
}

@property (weak, nonatomic) id<TSPDataDownloadManagerDelegate> delegate;

- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)documentResourceDataWithDigestString:(id)a0 locator:(id)a1 filename:(id)a2;

@end
