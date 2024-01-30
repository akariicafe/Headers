@class NSURL, NSString;

@interface UICreatePDFActivityItem : NSObject <QLPreviewItem>

@property (retain, nonatomic) NSURL *previewItemURL;
@property (retain, nonatomic) NSString *previewItemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
