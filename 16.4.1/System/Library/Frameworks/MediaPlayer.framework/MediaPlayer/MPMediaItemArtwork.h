@interface MPMediaItemArtwork : NSObject {
    struct CGSize { double width; double height; } _bounds;
    id /* block */ _requestHandler;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageCropRect;

- (id)initWithImage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithBoundsSize:(struct CGSize { double x0; double x1; })a0 requestHandler:(id /* block */)a1;
- (id)jpegDataWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)pngDataWithSize:(struct CGSize { double x0; double x1; })a0;

@end
