@class NSURL, NSString;

@interface _UIDICPreviewItem : NSObject <QLPreviewItem> {
    NSURL *_URLsToDeleteOnDealloc;
    NSString *_previewItemContentType;
}

@property (retain, nonatomic) NSURL *previewItemURL;
@property (retain, nonatomic) NSURL *previewItemURLOverride;
@property (retain, nonatomic) NSURL *previewItemURLForDisplay;
@property (retain, nonatomic) NSString *previewItemTitle;
@property (retain, nonatomic) NSString *previewItemContentType;
@property (retain, nonatomic) NSURL *URLToDeleteOnDealloc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)_primitive_previewItemContentType;

@end
