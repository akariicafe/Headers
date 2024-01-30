@class NSDictionary;

@interface EXExtensionPointCatalog : NSObject

@property (readonly) NSDictionary *extensionPointByIdentifierPlatform;

- (id)extensionPointForIdentifier:(id)a0 platform:(unsigned int)a1;
- (id)init;
- (id)initWithEnumerator:(id)a0;
- (void).cxx_destruct;
- (id)extensionPointForIdentifier:(id)a0;

@end
