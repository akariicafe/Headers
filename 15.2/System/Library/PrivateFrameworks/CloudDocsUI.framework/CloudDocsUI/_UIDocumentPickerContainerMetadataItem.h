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

- (id)modificationDate;
- (id)contentType;
- (id)url;
- (id)title;
- (id)initWithMetadataItem:(id)a0;
- (id)subtitle;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)type;
- (id)tags;
- (unsigned long long)hash;
- (unsigned long long)indentationLevel;
- (id)subtitle2;
- (BOOL)renameable;
- (id)urlInLocalContainer;
- (void)cacheValues:(id)a0;
- (void)_removeCachedValues;
- (id)sortPathComponents;
- (void)_cacheIndentationLevelWithSortPathComponents:(id)a0;
- (void)_modelChanged;
- (id)sortPath;

@end
