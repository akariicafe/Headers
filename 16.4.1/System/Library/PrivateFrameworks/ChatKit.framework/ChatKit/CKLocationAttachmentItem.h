@class NSString;

@interface CKLocationAttachmentItem : CKAttachmentItem

@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (copy, nonatomic) NSString *locationTitle;

+ (id)UTITypes;

- (void).cxx_destruct;
- (id)_generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0;
- (void)generatePreviewWithCompletion:(id /* block */)a0;
- (id)initWithFileURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 transferGUID:(id)a2 guid:(id)a3 createdDate:(id)a4;
- (BOOL)isDroppedPin;
- (id)vCardURLProperties;

@end
