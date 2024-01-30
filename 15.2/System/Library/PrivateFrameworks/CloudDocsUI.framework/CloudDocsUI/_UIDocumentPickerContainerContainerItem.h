@class BRContainer, NSString;

@interface _UIDocumentPickerContainerContainerItem : _UIDocumentPickerContainerItem {
    NSString *_cachedSubtitle;
    BRContainer *_container;
}

@property (readonly, nonatomic) BRContainer *container;

- (id)initWithContainer:(id)a0;
- (id)modificationDate;
- (id)url;
- (id)title;
- (id)subtitle;
- (void).cxx_destruct;
- (long long)type;
- (void)_modelChanged;
- (id)sortPath;
- (id)_blockingThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 wantsBorder:(BOOL *)a2;

@end
