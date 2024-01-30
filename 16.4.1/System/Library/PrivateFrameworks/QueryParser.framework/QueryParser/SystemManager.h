@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SystemManager : NSObject {
    int _newNotifyToken;
    int _updatedNotifyToken;
    BOOL _locked_hasUpdatedResources;
    BOOL _locked_hasUpdatedLocale;
    struct __CFLocale { } *_locked_currentLocale;
    struct __CFArray { } *_locked_currentPreferredLanguages;
    NSMutableDictionary *_locked_requiredAssets;
    NSMutableDictionary *_locked_optionalAssets;
    NSObject<OS_dispatch_queue> *_assetsQueue;
    NSObject<OS_dispatch_queue> *_resourcesQueue;
    NSObject<OS_dispatch_queue> *_localeQueue;
}

+ (id)defaultManager;

- (void)dealloc;
- (id)init;
- (void)_updateLocale;
- (struct __CFLocale { } *)copyCurrentLocale;
- (struct __CFArray { } *)copyCurrentPreferredLanguages;
- (void)enumerateResourcesForLocale:(id)a0 contentType:(id)a1 contentName:(id)a2 isUpdate:(BOOL)a3 usingBlock:(id /* block */)a4;
- (BOOL)hasResourcesForLocale:(id)a0 contentType:(id)a1 contentName:(id)a2 resourceType:(unsigned int)a3;
- (BOOL)hasUpdatedLocale;
- (BOOL)hasUpdatedResources;
- (void)lockedUpdateAssets;
- (void)updateAssetsForLocale:(id)a0 contentType:(id)a1 contentName:(id)a2 resourceType:(unsigned int)a3;

@end
