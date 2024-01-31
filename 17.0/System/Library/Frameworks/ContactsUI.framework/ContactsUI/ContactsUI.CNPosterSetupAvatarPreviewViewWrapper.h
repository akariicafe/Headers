@interface ContactsUI.CNPosterSetupAvatarPreviewViewWrapper : NSObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ avatarPreviewView;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ hostingController;

- (id)init;
- (void)setImageData:(id)a0;
- (void)setImageType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImageData:(id)a0 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 imageType:(unsigned long long)a2 delegate:(id)a3;

@end
