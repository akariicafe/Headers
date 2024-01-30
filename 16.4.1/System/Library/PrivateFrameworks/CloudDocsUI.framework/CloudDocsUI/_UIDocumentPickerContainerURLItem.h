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

- (id)initWithURL:(id)a0;
- (id)subtitle2;
- (id)modificationDate;
- (id)contentType;
- (id)subtitle;
- (id)url;
- (long long)type;
- (unsigned long long)indentationLevel;
- (id)tags;
- (id)title;
- (void).cxx_destruct;
- (BOOL)isAlias;
- (void)_cacheIndentationLevelWithSortPathComponents:(id)a0;
- (void)_modelChanged;
- (void)_removeCachedValues;
- (BOOL)attributesModified:(id)a0;
- (void)cacheValues;
- (BOOL)renameable;
- (id)sortPath;
- (id)sortPathComponents;
- (id)urlInLocalContainer;

@end
