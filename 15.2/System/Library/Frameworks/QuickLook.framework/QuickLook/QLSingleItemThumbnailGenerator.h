@class NSString, QLItem, UIImage, QLItemThumbnailGenerator;

@interface QLSingleItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocolInternal, NSSecureCoding> {
    UIImage *_thumbnail;
    struct CGSize { double width; double height; } _thumbnailSize;
    BOOL _isRepresentative;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) QLItemThumbnailGenerator *thumbnailGenerator;
@property (weak, nonatomic) QLItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)generateThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 completionBlock:(id /* block */)a1;
- (id)genericIconWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_provideThumbnailForUbiquitousURLWithSize:(struct CGSize { double x0; double x1; })a0 completionBlock:(id /* block */)a1;
- (void)_handleThumbnailGenerationFinishedWithThumbnail:(id)a0 size:(struct CGSize { double x0; double x1; })a1 clientCompletionBlock:(id /* block */)a2;

@end
