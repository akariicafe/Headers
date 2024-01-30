@class NSString, NSURL;

@interface MUUserSubmittedPhoto : NSObject <MUPhotoTileViewModel> {
    NSURL *_photoURL;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *photoID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configureWithSize:(struct CGSize { double x0; double x1; })a0 imageProvider:(id /* block */)a1;
- (id)initWithPhotoURL:(id)a0;

@end
