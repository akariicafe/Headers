@interface JFXMediaDataReaderFactory : NSObject

@property (class, readonly) JFXMediaDataReaderFactory *sharedInstance;

- (id)createARMetadataReaderWithCreationAttributesProvider:(id)a0 name:(id)a1;
- (id)createDepthDataReaderWithCreationAttributesProvider:(id)a0 name:(id)a1;

@end
