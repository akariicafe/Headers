@class NSOperation, NSString, NSMapTable, _UIDocumentPickerContainerModel, NSURL, NSDate, _UIDocumentPickerURLContainerModel;

@interface _UIDocumentPickerContainerItem : NSObject <_UIDocumentPickerDirectoryObserverItem> {
    _UIDocumentPickerURLContainerModel *_model;
    _UIDocumentPickerURLContainerModel *_weak_model;
    long long _modelDisplayCount;
    id _resourceIdentifier;
    NSOperation *_thumbnailLoadOperation;
    BOOL _hasCachedIsAlias;
    BOOL _cachedIsAlias;
}

@property (retain, nonatomic) NSMapTable *thumbnailsBySize;
@property (nonatomic) BOOL pickable;
@property (weak, nonatomic) _UIDocumentPickerContainerModel *parentModel;
@property (copy, nonatomic) NSString *pickabilityReason;
@property (readonly, nonatomic) long long type;
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSString *subtitle;
@property (readonly, retain, nonatomic) NSString *subtitle2;
@property (readonly, retain, nonatomic) NSURL *url;
@property (readonly, retain, nonatomic) NSURL *urlInLocalContainer;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) BOOL renameable;
@property (readonly, retain, nonatomic) _UIDocumentPickerContainerModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_lruThumbnailArray;
+ (void)markThumbnailAsRecentlyUsed:(id)a0;
+ (id)_blockingFolderIconForURL:(id)a0 container:(id)a1 size:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;
+ (id)_blockingThumbnailForItem:(id)a0 documentProxy:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 scale:(double)a3 wantsBorder:(BOOL *)a4 generatedThumbnail:(BOOL *)a5;
+ (void)clearLRUThumbnailCache;
+ (id)_blockingIconForDocumentProxy:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (id)_blockingBadgeForContainer:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
+ (id)_blockingIconForURL:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;

- (id)contentType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)tags;
- (void)dealloc;
- (BOOL)isAlias;
- (unsigned long long)indentationLevel;
- (id)_resourceIdentifier;
- (void)decrementModelDisplayCount;
- (void)incrementModelDisplayCount;
- (BOOL)isActionApplicableForItem:(long long)a0;
- (id)_formattedSubtitleForNumberOfItems:(unsigned long long)a0;
- (void)_modelChanged;
- (id)sortPath;
- (id)_createThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_blockingThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 wantsBorder:(BOOL *)a2;
- (id)_blipWithTags:(id)a0 height:(double)a1 scale:(double)a2;
- (void)_ensureModelPresent;
- (void)modelChanged;
- (id)thumbnailWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)tagBlipsWithHeight:(double)a0 scale:(double)a1;

@end
