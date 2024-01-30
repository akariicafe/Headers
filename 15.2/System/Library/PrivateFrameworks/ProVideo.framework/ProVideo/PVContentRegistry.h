@class NSLock, NSMutableDictionary;

@interface PVContentRegistry : NSObject {
    NSMutableDictionary *_contentDictionary;
    NSLock *_dictionaryLock;
}

+ (id)sharedInstance;
+ (void)willTerminate:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isContentIDRegistered:(id)a0;
- (BOOL)unregisterContentID:(id)a0;
- (id)contentPathForID:(id)a0;
- (BOOL)registerContentFile:(id)a0 forID:(id)a1 properties:(id)a2;
- (id)createContentInstance:(id)a0;
- (BOOL)registerContentClass:(Class)a0 forID:(id)a1 type:(id)a2 withProperties:(id)a3;
- (void)initContentRegistryWithHostDelegate:(id)a0;
- (void)registerBuiltIns;
- (BOOL)registerContentDictionary:(id)a0 withBaseDir:(id)a1;
- (id)lookupPropertyForID:(id)a0 property:(id)a1;
- (id)contentPropertiesForID:(id)a0;
- (void)initContentRegistry;
- (BOOL)registerContentBundle:(id)a0;
- (id)listAllContentGroups;
- (id)listAllContentIDs;
- (id)listIDsForContentGroup:(id)a0;
- (id)listIDsForContentGroups:(id)a0;
- (id)listIDsForContentType:(id)a0;
- (id)listIDsForContentTypes:(id)a0;
- (id)contentGroupForID:(id)a0;
- (id)bundleForID:(id)a0;
- (BOOL)isTranscription:(id)a0;
- (BOOL)isSingleWordTranscription:(id)a0;
- (BOOL)isSketch:(id)a0;
- (BOOL)isSelfie:(id)a0;
- (BOOL)hasStyleTransfer:(id)a0;

@end
