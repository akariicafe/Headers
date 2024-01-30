@class BRContainer, NSString;

@interface _UIDocumentPickerContainerContainerItem : _UIDocumentPickerContainerItem {
    NSString *_cachedSubtitle;
    BRContainer *_container;
}

@property (readonly, nonatomic) BRContainer *container;

- (id)modificationDate;
- (void).cxx_destruct;
- (id)subtitle;
- (id)url;
- (long long)type;
- (id)initWithContainer:(id)a0;
- (id)title;
- (void)_modelChanged;
- (id)sortPath;
- (id)_blockingThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 wantsBorder:(BOOL *)a2;

@end
