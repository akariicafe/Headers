@class NSURL, NSString, LPMetadataProvider;

@interface VUIShareActivityViewController_iOS : UIActivityViewController {
    LPMetadataProvider *_pendingMessageMetadataProvider;
    NSURL *_sharingURL;
}

@property (retain, nonatomic) NSURL *itemImageURL;
@property (retain, nonatomic) NSString *itemTitle;
@property (retain, nonatomic) NSString *itemSubtitle;

+ (void)shareMediaItem:(id)a0 title:(id)a1 subtitle:(id)a2 imageURLStr:(id)a3 sourceView:(id)a4;
+ (void)shareMediaWithShareSheet:(id)a0;

- (void)_prepareActivity:(id)a0 completion:(id /* block */)a1;
- (id)initWithActivityItems:(id)a0 applicationActivities:(id)a1;
- (void).cxx_destruct;

@end
