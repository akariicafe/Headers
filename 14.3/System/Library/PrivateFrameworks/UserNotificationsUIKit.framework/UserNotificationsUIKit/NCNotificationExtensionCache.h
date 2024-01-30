@class NSMutableDictionary;

@interface NCNotificationExtensionCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *extensions;

- (void)_addExtension:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)extensionForNotificationRequest:(id)a0;
- (id)_categoriesForExtension:(id)a0;
- (id)_sectionDictForSection:(id)a0;
- (id)_extensionMatchingSection:(id)a0 category:(id)a1;
- (void)registerExtensions:(id)a0;
- (void)_removeAllExtensions;

@end
