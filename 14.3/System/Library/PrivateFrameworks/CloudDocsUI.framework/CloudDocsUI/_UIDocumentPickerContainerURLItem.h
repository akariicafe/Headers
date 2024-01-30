@class NSString, NSArray, NSURL, NSDate;

@interface _UIDocumentPickerContainerURLItem : _UIDocumentPickerContainerItem {
    NSURL *_url;
    long long _cachedType;
    NSString *_cachedTitle;
    NSString *_cachedSubtitle;
    NSString *_cachedSubtitle2;
    NSArray *_cachedTags;
    unsigned long long _cachedIndentation;
    NSString *_cachedSortPath;
    NSString *_cachedContentType;
    NSDate *_cachedContentModifiedDate;
    BOOL _cachedIsAlias;
    id _generationIdentifier;
}

+ (id)defaultKeys;

- (id)subtitle2;
- (id)modificationDate;
- (void).cxx_destruct;
- (id)contentType;
- (id)subtitle;
- (id)initWithURL:(id)a0;
- (id)url;
- (long long)type;
- (id)tags;
- (BOOL)isAlias;
- (id)title;
- (unsigned long long)indentationLevel;
- (BOOL)renameable;
- (id)urlInLocalContainer;
- (void)_removeCachedValues;
- (id)sortPathComponents;
- (void)_cacheIndentationLevelWithSortPathComponents:(id)a0;
- (void)_modelChanged;
- (id)sortPath;
- (BOOL)attributesModified:(id)a0;
- (void)cacheValues;

@end
