@class NSString, UTType, NSURL, QLItem;

@interface MailQLItemDataProvider : NSObject <QLPreviewItemDataProvider>

@property (readonly, copy, nonatomic) QLItem *item;
@property (readonly, nonatomic) UTType *contentType;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithURL:(id)a0;
- (id)provideDataForItem:(id)a0;
- (void).cxx_destruct;

@end
