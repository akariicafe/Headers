@class NSString, CXCallDirectoryMutablePhoneNumberEntryData, CXCallDirectoryMutableLabeledPhoneNumberEntryData;
@protocol CXCallDirectoryExtensionContextDelegate;

@interface CXCallDirectoryExtensionContext : NSExtensionContext <CXCallDirectoryProviderVendorProtocol>

@property (retain, nonatomic) CXCallDirectoryMutablePhoneNumberEntryData *pendingBlockingEntryData;
@property (nonatomic) long long pendingBlockingEntryChangeType;
@property (retain, nonatomic) CXCallDirectoryMutableLabeledPhoneNumberEntryData *pendingIdentificationEntryDataForAddition;
@property (retain, nonatomic) CXCallDirectoryMutablePhoneNumberEntryData *pendingIdentificationEntryDataForRemoval;
@property (nonatomic) long long pendingIdentificationEntryChangeType;
@property (nonatomic) BOOL hasQueriedIsIncremental;
@property (copy, nonatomic) id /* block */ remoteObjectProxyGenerator;
@property (weak, nonatomic) id<CXCallDirectoryExtensionContextDelegate> delegate;
@property (readonly, nonatomic, getter=isIncremental) BOOL incremental;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void).cxx_destruct;
- (void)_flushPendingBlockingEntryData;
- (void)_flushPendingIdentificationEntryData;
- (void)_performBlockIfIncremental:(id /* block */)a0 usingSelectorForExceptionMessage:(SEL)a1;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0 synchronous:(BOOL)a1;
- (void)addBlockingEntryWithNextSequentialPhoneNumber:(long long)a0;
- (void)addIdentificationEntryWithNextSequentialPhoneNumber:(long long)a0 label:(id)a1;
- (void)appendBlockingEntryPhoneNumber:(long long)a0 changeType:(long long)a1;
- (void)appendIdentificationEntryForAdditionWithPhoneNumber:(long long)a0 label:(id)a1;
- (void)appendIdentificationEntryForRemovalWithPhoneNumber:(long long)a0;
- (void)completeRequestWithCompletionHandler:(id /* block */)a0;
- (void)removeAllBlockingEntries;
- (void)removeAllIdentificationEntries;
- (void)removeBlockingEntryWithPhoneNumber:(long long)a0;
- (void)removeIdentificationEntryWithPhoneNumber:(long long)a0;
- (oneway void)requestFailedWithError:(id)a0 reply:(id /* block */)a1;

@end
