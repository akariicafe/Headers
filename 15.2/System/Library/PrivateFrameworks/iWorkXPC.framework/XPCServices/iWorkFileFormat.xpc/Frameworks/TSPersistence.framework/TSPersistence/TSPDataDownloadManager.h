@class TSPObjectContext;
@protocol TSPDataDownloadManagerDelegate;

@interface TSPDataDownloadManager : NSObject {
    TSPObjectContext *_context;
}

@property (weak, nonatomic) id<TSPDataDownloadManagerDelegate> delegate;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)documentResourceDataWithDigestString:(id)a0 locator:(id)a1 filename:(id)a2;

@end
