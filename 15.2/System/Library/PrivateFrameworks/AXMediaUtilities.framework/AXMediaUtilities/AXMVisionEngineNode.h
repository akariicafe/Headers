@class NSString, NSObject;
@protocol OS_dispatch_queue, AXMVisionEngineNodeConnectionDelegate;

@interface AXMVisionEngineNode : NSObject <NSSecureCoding, AXMDescribing>

@property (class, readonly, nonatomic) BOOL isSupported;
@property (class, readonly, nonatomic) NSString *title;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isConnected) BOOL connected;
@property (weak, nonatomic) id<AXMVisionEngineNodeConnectionDelegate> delegate;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nodeQueue;
@property (readonly, nonatomic) BOOL areDiagnosticsEnabled;
@property (readonly, nonatomic) BOOL requiresVisionFramework;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)disconnect;
- (void)connect:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)nodeInitialize;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (id)axmDescription;
- (void)axmAppendRecursiveDescription:(id)a0 withIndentation:(long long)a1;
- (void)freeResources;

@end
