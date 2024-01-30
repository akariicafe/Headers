@class NSString, NSURL, LPMetadataProvider, TVImageProxy;

@interface VUIShareActivityViewController : UIActivityViewController {
    LPMetadataProvider *_pendingMessageMetadataProvider;
    NSURL *_sharingURL;
    TVImageProxy *_imageProxy;
}

@property (retain, nonatomic) NSURL *itemImageURL;
@property (retain, nonatomic) NSString *itemTitle;
@property (retain, nonatomic) NSString *itemSubtitle;

+ (void)shareMediaItem:(id)a0 title:(id)a1 subtitle:(id)a2 imageURLStr:(id)a3 sourceView:(id)a4;
+ (void)shareMediaWithShareSheet:(id)a0;

- (void).cxx_destruct;
- (id)initWithActivityItems:(id)a0 applicationActivities:(id)a1;
- (void)_prepareActivity:(id)a0 completion:(id /* block */)a1;

@end
