@class NSString, NSData;
@protocol NSItemProviderWriting;

@interface WebItemProviderPromisedFileRegistrar : NSObject <WebItemProviderRegistrar> {
    struct RetainPtr<NSString> { void *m_ptr; } _typeIdentifier;
    struct BlockPtr<void (void (^)(NSURL *, NSError *))> { id /* block */ m_block; } _callback;
}

@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) id<NSItemProviderWriting> representingObjectForClient;
@property (readonly, nonatomic) NSString *typeIdentifierForClient;
@property (readonly, nonatomic) NSData *dataForClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerItemProvider:(id)a0;
- (id)initWithType:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
