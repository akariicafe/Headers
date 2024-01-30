@class NSLock, NSMapTable;

@interface _MFMessageContentURLProtocolRegistry : NSObject {
    NSLock *_lock;
}

@property (readonly, nonatomic) NSMapTable *storage;

+ (id)sharedRegistry;

- (id)init;
- (void).cxx_destruct;
- (id)URLForLoadingContext:(id)a0 scheme:(id)a1;
- (id)loadingContextForURL:(id)a0;

@end
