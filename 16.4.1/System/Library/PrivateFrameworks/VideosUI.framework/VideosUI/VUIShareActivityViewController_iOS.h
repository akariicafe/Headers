@class NSURL, NSString, LPMetadataProvider;

@interface VUIShareActivityViewController_iOS : UIActivityViewController {
    LPMetadataProvider *_pendingMessageMetadataProvider;
    NSURL *_sharingURL;
}

@property (retain, nonatomic) NSURL *itemImageURL;
@property (retain, nonatomic) NSString *itemTitle;
@property (retain, nonatomic) NSString *itemSubtitle;

+ (void)shareMediaItem:(id)a0 title:(id)a1 subtitle:(id)a2 imageURLStr:(id)a3 groupActivityMetadata:(id)a4 sourceView:(id)a5 completionHandler:(id /* block */)a6;
+ (void)shareMediaItem:(id)a0 title:(id)a1 subtitle:(id)a2 imageURLStr:(id)a3 sharedWatchId:(id)a4 sharedWatchUrl:(id)a5 sourceView:(id)a6 completionHandler:(id /* block */)a7;
+ (void)shareMediaWithShareSheet:(id)a0;

- (void).cxx_destruct;
- (id)initWithActivityItems:(id)a0 applicationActivities:(id)a1;
- (void)_prepareActivity:(id)a0 completion:(id /* block */)a1;

@end
