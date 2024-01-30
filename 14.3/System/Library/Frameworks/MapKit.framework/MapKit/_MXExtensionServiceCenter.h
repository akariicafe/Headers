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

- (void)receivedExtensions:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (void)_clearExtensions;
- (id)_extensionWithIdentifier:(id)a0;
- (id)allExtensions;
- (id)initWithExtensionProvider:(id)a0;
- (id)_siblingExtensionsWithContainingAppIdentifer:(id)a0;

@end
