@class NSURL;

@interface HUClipExporterItemProvider : UIActivityItemProvider

@property (retain, nonatomic) NSURL *clipURL;

- (id)initWithURL:(id)a0;
- (id)item;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 dataTypeIdentifierForActivityType:(id)a1;
- (id)activityViewController:(id)a0 subjectForActivityType:(id)a1;

@end
