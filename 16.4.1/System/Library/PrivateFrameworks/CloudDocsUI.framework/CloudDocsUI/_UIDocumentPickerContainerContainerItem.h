@class BRContainer, NSString;

@interface _UIDocumentPickerContainerContainerItem : _UIDocumentPickerContainerItem {
    NSString *_cachedSubtitle;
    BRContainer *_container;
}

@property (readonly, nonatomic) BRContainer *container;

- (id)initWithContainer:(id)a0;
- (id)modificationDate;
- (id)subtitle;
- (id)url;
- (long long)type;
- (id)title;
- (void).cxx_destruct;
- (id)_blockingThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 wantsBorder:(BOOL *)a2;
- (void)_modelChanged;
- (id)sortPath;

@end
