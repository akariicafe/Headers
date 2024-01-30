@class _HKBackgroundObservationExtensionHostContext, NSString, NSUUID, _HKBackgroundObservationExtensionRemoteContext, NSExtension, NSObject;
@protocol OS_dispatch_queue;

@interface HDBackgroundObservationServerExtension : NSObject {
    NSExtension *_extension;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSUUID *_sessionUUID;
    _HKBackgroundObservationExtensionHostContext *_extensionHostContext;
    _HKBackgroundObservationExtensionRemoteContext *_extensionContext;
}

@property (nonatomic) BOOL unitTest_notifiedExtensionDueToTimeout;
@property (readonly, copy, nonatomic) NSString *extensionIdentifier;
@property (readonly, copy, nonatomic) NSString *appIdentifier;

- (void)disconnect;
- (id)init;
- (void).cxx_destruct;
- (void)connectWithCompletionHandler:(id /* block */)a0;
- (id)description;
- (id)_initWithExtension:(id)a0;
- (void)notifyExtensionOfUpcomingTimeout;
- (void)notifyExtensionOfUpdateForSampleType:(id)a0 completionHandler:(id /* block */)a1;
- (id)unitTest_sessionUUID;
- (id)unitTest_extensionContext;
- (id)unitTest_extensionHostContext;
- (id)unitTest_queue;

@end
