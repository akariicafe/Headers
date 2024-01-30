@class NSObject;
@protocol OS_dispatch_queue, CSCATAssetManagerDelegate;

@interface CSCATAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<CSCATAssetManagerDelegate> delegate;

+ (id)sharedInstance;
+ (id)getCATXPCConnection;

- (void).cxx_destruct;
- (id)init;
- (void)fetchRemoteCATAssetForResource:(id)a0 withNameOfFile:(id)a1 completion:(id /* block */)a2;
- (void)downloadForManifest:(id)a0 withAssetName:(id)a1;

@end
