@class NSURL;
@protocol QLPreviewItem;

@interface QLEditedItem : NSObject

@property (copy, nonatomic) id<QLPreviewItem> item;
@property (copy, nonatomic) NSURL *editedFileURL;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 editedFileURL:(id)a1;

@end
