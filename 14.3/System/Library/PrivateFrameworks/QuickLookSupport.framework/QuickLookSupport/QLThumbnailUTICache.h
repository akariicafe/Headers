@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface QLThumbnailUTICache : NSObject {
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
}

@property (retain) NSMutableDictionary *itemTypeCache;

+ (id)_iWorkUTIs;
+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)itemTypeForItem:(id)a0;
- (BOOL)requestedBadgeType:(unsigned long long)a0 isValidForContentType:(id)a1;
- (BOOL)_contentType:(id)a0 isEqualToContentTypeInArray:(id)a1;
- (BOOL)_contentTypeIsIWorkType:(id)a0;
- (BOOL)_contentTypeShouldBeHandledByAppleExtension:(id)a0;
- (unsigned long long)itemTypeForContentType:(id)a0;
- (unsigned long long)_itemTypeByUTIResolutionForContentType:(id)a0;

@end
