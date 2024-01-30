@class NSURL;

@interface HUClipExporterItemProvider : UIActivityItemProvider

@property (retain, nonatomic) NSURL *clipURL;

- (id)item;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;
- (id)initWithURL:(id)a0;

@end
