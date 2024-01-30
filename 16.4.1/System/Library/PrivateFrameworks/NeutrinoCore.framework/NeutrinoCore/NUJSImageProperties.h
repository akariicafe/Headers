@class NSString, NSDictionary, NUJSDepthProperties, NUJSRAWImageProperties;
@protocol NUImageProperties;

@interface NUJSImageProperties : NUJSProxy <NUJSImagePropertiesExport>

@property (readonly) id<NUImageProperties> imageProperties;
@property (readonly) NSDictionary *metadata;
@property (readonly) NSString *fileUTI;
@property (readonly) NUJSDepthProperties *depthProperties;
@property (readonly) NUJSRAWImageProperties *rawImageProperties;

- (id)initWithImageProperties:(id)a0 context:(id)a1;
- (id)initWithRepresentedObject:(id)a0 context:(id)a1;

@end
