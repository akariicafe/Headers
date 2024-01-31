@class NSSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BAAppStoreProgressConfiguration : NSObject <NSSecureCoding, BAAppStoreProgressObserverConfiguring> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    id /* block */ _updateHandler;
    NSSet *_appBundleIdentifiers;
    NSMutableDictionary *_duplicateEventCache;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void)setUpdateHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setHandlerQueue:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAppBundleIdentifiers:(id)a0;

@end
