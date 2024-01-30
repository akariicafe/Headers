@class NSMutableDictionary;

@interface _UNNotificationContentExtensionCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *extensions;

- (void)registerExtensions:(id)a0;
- (void)_addExtension:(id)a0;
- (id)_sourceDictForSource:(id)a0;
- (id)init;
- (id)extensionForNotificationSourceIdentifier:(id)a0 categoryIdentifier:(id)a1;
- (void)_removeAllExtensions;
- (void).cxx_destruct;

@end
