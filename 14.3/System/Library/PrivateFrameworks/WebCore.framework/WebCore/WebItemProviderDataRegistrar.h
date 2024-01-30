@class NSString, NSData;
@protocol NSItemProviderWriting;

@interface WebItemProviderDataRegistrar : NSObject <WebItemProviderRegistrar> {
    struct RetainPtr<NSString> { void *m_ptr; } _typeIdentifier;
    struct RetainPtr<NSData> { void *m_ptr; } _data;
}

@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) id<NSItemProviderWriting> representingObjectForClient;
@property (readonly, nonatomic) NSString *typeIdentifierForClient;
@property (readonly, nonatomic) NSData *dataForClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
