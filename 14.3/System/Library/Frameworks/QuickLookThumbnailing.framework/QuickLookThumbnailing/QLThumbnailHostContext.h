@class NSOperationQueue, NSString;
@protocol QLThumbnailSurfaceGeneratorProtocol;

@interface QLThumbnailHostContext : NSExtensionContext <QLThumbnailHost>

@property (retain, nonatomic) NSOperationQueue *thumbnailGenerationConcurrenQueue;
@property (weak, nonatomic) id<QLThumbnailSurfaceGeneratorProtocol> ioSurfaceGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

@end
