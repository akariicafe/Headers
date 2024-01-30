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

- (id)modificationDate;
- (id)contentType;
- (id)url;
- (id)initWithURL:(id)a0;
- (id)title;
- (id)subtitle;
- (void).cxx_destruct;
- (long long)type;
- (id)tags;
- (BOOL)isAlias;
- (unsigned long long)indentationLevel;
- (id)subtitle2;
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
