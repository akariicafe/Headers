@class NSURL, NSString;

@interface SXQuickLookFile : NSObject

@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *shareURL;

- (void).cxx_destruct;
- (id)previewItemTitle;
- (id)previewItemURL;
- (id)initWithFileURL:(id)a0 title:(id)a1 shareURL:(id)a2;
- (id)initWithFileURL:(id)a0 shareURL:(id)a1;

@end
