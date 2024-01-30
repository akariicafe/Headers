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
- (void).cxx_destruct;
- (id)contentType;
- (id)subtitle;
- (unsigned long long)hash;
- (id)url;
- (long long)type;
- (BOOL)isEqual:(id)a0;
- (id)tags;
- (id)initWithMetadataItem:(id)a0;
- (id)title;
- (unsigned long long)indentationLevel;
- (BOOL)renameable;
- (id)urlInLocalContainer;
- (void)cacheValues:(id)a0;
- (void)_removeCachedValues;
- (id)sortPathComponents;
- (void)_cacheIndentationLevelWithSortPathComponents:(id)a0;
- (void)_modelChanged;
- (id)sortPath;

@end
