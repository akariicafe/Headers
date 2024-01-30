@class NSString, NSData;
@protocol NSItemProviderWriting;

@interface WebItemProviderWritableObjectRegistrar : NSObject <WebItemProviderRegistrar> {
    struct RetainPtr<id<NSItemProviderWriting>> { void *m_ptr; } _representingObject;
}

@property (readonly, nonatomic) id<NSItemProviderWriting> representingObject;
@property (readonly, nonatomic) id<NSItemProviderWriting> representingObjectForClient;
@property (readonly, nonatomic) NSString *typeIdentifierForClient;
@property (readonly, nonatomic) NSData *dataForClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObject:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)registerItemProvider:(id)a0;

@end
