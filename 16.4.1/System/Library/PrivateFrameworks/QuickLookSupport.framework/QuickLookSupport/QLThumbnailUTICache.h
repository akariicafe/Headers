@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface QLThumbnailUTICache : NSObject {
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

@property (retain, nonatomic) NSMutableDictionary *itemTypeCache;
@property (retain, nonatomic) NSMutableDictionary *dataItemTypeCache;
@property (retain, nonatomic) NSMutableDictionary *useExtensionCache;
@property (retain, nonatomic) NSMutableDictionary *dataItemUseExtensionCache;

+ (id)sharedCache;
+ (id)_iWorkUTIs;
+ (BOOL)contentType:(id)a0 conformsToContentTypeInArray:(id)a1;
+ (BOOL)contentTypeIdentifier:(id)a0 conformsToContentTypeIdentifierInArray:(id)a1;
+ (BOOL)contentTypeIsIWorkType:(id)a0;
+ (id)iWorkTypes;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)itemTypeForItem:(id)a0;
- (BOOL)requestedBadgeType:(unsigned long long)a0 isValidForContentType:(id)a1;
- (BOOL)useExtensionForItem:(id)a0;
- (BOOL)_contentTypeShouldBeHandledByAppleExtension:(id)a0;
- (unsigned long long)_itemTypeByUTIResolutionForContentType:(id)a0 isDataItem:(BOOL)a1;
- (unsigned long long)itemTypeForContentType:(id)a0;
- (unsigned long long)itemTypeForContentType:(id)a0 isDataItem:(BOOL)a1;
- (BOOL)useExtensionForContentType:(id)a0 isDataItem:(BOOL)a1;
- (BOOL)useExtensionUncachedForContentType:(id)a0 isDataItem:(BOOL)a1;

@end
