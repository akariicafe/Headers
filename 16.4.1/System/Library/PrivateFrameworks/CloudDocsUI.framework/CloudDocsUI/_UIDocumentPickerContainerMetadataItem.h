@class NSString, NSArray, NSURL, NSDate, NSNumber;

@interface _UIDocumentPickerContainerMetadataItem : _UIDocumentPickerContainerItem {
    long long _cachedType;
    NSString *_cachedTitle;
    NSString *_cachedSubtitle;
    NSString *_cachedSubtitle2;
    NSArray *_cachedTags;
    NSURL *_cachedURL;
    NSURL *_cachedURLInLocalContainer;
    unsigned long long _cachedIndentation;
    NSString *_cachedSortPath;
    NSString *_cachedContentType;
    NSDate *_cachedContentModifiedDate;
    NSNumber *_cachedFileObjectID;
    BOOL _cachedRenameable;
}

- (id)subtitle2;
- (id)modificationDate;
- (id)contentType;
- (id)subtitle;
- (id)url;
- (long long)type;
- (unsigned long long)indentationLevel;
- (id)tags;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)title;
- (void).cxx_destruct;
- (id)initWithMetadataItem:(id)a0;
- (void)_cacheIndentationLevelWithSortPathComponents:(id)a0;
- (void)_modelChanged;
- (void)_removeCachedValues;
- (void)cacheValues:(id)a0;
- (BOOL)renameable;
- (id)sortPath;
- (id)sortPathComponents;
- (id)urlInLocalContainer;

@end
