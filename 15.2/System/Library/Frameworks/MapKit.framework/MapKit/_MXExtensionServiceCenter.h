@class NSDictionary, _MXExtensionProvider, NSObject;
@protocol OS_dispatch_queue;

@interface _MXExtensionServiceCenter : NSObject {
    NSObject<OS_dispatch_queue> *_extlock;
    NSDictionary *_extensions;
    NSDictionary *_mapsExtensions;
    NSDictionary *_containingAppProxies;
}

@property (copy, nonatomic) NSDictionary *extensions;
@property (copy, nonatomic) NSDictionary *mapsExtensions;
@property (copy, nonatomic) NSDictionary *containingAppProxies;
@property (readonly, weak, nonatomic) _MXExtensionProvider *extensionProvider;

- (id)initWithExtensionProvider:(id)a0;
- (void)receivedExtensions:(id)a0 error:(id)a1;
- (void)_clearExtensions;
- (id)allExtensions;
- (void).cxx_destruct;
- (id)_siblingExtensionsWithContainingAppIdentifer:(id)a0;
- (id)_extensionWithIdentifier:(id)a0;

@end
