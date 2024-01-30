@class NSItemProvider, WBSStartPageBackgroundImagesDataSource, WBSStartPageBackgroundImageDescription;

@interface SFStartPageBackgroundImageModel : NSObject {
    WBSStartPageBackgroundImagesDataSource *_dataSource;
    long long _index;
}

@property (readonly, nonatomic) WBSStartPageBackgroundImageDescription *imageDescription;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) BOOL isCustomImage;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;

- (id)description;
- (id)initWithItemProvider:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithIndex:(long long)a0 inDataSource:(id)a1 selected:(BOOL)a2;
- (void)getThumbnailImageWithCompletionHandler:(id /* block */)a0;

@end
