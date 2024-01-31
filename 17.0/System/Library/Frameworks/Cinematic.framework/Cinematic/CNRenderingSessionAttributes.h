@class PTGlobalRenderingMetadata;

@interface CNRenderingSessionAttributes : NSObject

@property (readonly) PTGlobalRenderingMetadata *internalMetadata;
@property (readonly) long long majorVersion;
@property (readonly) long long minorVersion;
@property (readonly) long long renderingVersion;

+ (id)_PTGlobalRenderingMetadataFromAsset:(id)a0;
+ (id)_PTGlobalRenderingMetadataFromItems:(id)a0;
+ (void)_loadPTGlobalRenderingMetadataFromAsset:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadFromAsset:(id)a0 completionHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithPTGlobalRenderingMetadata:(id)a0;

@end
