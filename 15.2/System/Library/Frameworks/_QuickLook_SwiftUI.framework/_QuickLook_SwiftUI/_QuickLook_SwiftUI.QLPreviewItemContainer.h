@class NSURL;

@interface _QuickLook_SwiftUI.QLPreviewItemContainer : NSObject <QLPreviewItem> {
    void /* unknown type, empty encoding */ previewItemURL;
}

@property (nonatomic, copy) NSURL *previewItemURL;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
