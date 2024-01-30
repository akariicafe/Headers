@class NSDictionary;

@interface MediaPlaybackCore.QueueAssetLoaderControllerImplementation : _TtCs12_SwiftObject <MFErrorController, MFStateDumpable> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ silentFailureDirection;
    void /* unknown type, empty encoding */ errorResolutionItem;
    void /* unknown type, empty encoding */ token;
    void /* unknown type, empty encoding */ wrapAround;
    void /* unknown type, empty encoding */ queueController;
    void /* unknown type, empty encoding */ itemLoader;
    void /* unknown type, empty encoding */ itemBuffer;
    void /* unknown type, empty encoding */ loadingCompletions;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ errorController;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)resetWithReason:(id)a0;
- (void)reportCriticalError:(id)a0 forItem:(id)a1;
- (void)resolveError:(id)a0 forItem:(id)a1 completion:(id /* block */)a2;

@end
