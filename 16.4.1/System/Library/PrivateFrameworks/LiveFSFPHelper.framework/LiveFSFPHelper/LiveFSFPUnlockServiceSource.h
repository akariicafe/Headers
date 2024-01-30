@class NSString, NSOperationQueue, NSHashTable, LiveFSFPExtensionHelper;

@interface LiveFSFPUnlockServiceSource : NSObject <NSXPCListenerDelegate, LiveFSUnlock, NSFileProviderServiceSource> {
    LiveFSFPExtensionHelper *_fileProviderExtension;
    NSString *_itemIdentifier;
    NSOperationQueue *_operationQueue;
    NSHashTable *_listeners;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;

@end
