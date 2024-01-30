@class NSItemProvider, WBSStartPageBackgroundImagesDataSource, WBSStartPageBackgroundImageDescription;

@interface SFStartPageBackgroundImageModel : NSObject {
    WBSStartPageBackgroundImagesDataSource *_dataSource;
    long long _index;
}

@property (readonly, nonatomic) WBSStartPageBackgroundImageDescription *imageDescription;
@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) BOOL isCustomImage;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithItemProvider:(id)a0;
- (void)getThumbnailImageWithCompletionHandler:(id /* block */)a0;
- (id)initWithIndex:(long long)a0 inDataSource:(id)a1 selected:(BOOL)a2;

@end
