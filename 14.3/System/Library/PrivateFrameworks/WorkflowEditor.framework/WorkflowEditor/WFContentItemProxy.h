@class NSString, NSURL, WFFileRepresentation, WFContentItem;

@interface WFContentItemProxy : NSObject <QLPreviewItem>

@property (retain, nonatomic) WFFileRepresentation *file;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (weak, nonatomic) WFContentItem *item;
@property (weak, nonatomic) WFContentItem *originalItem;
@property (readonly, nonatomic) NSURL *previewItemURL;
@property (readonly, nonatomic) NSString *previewItemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)previewRetrievalQueue;

- (void).cxx_destruct;

@end
