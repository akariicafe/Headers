@class FMFLocation, IMHandle, NSString;

@interface CKLocationShareOfferChatItem : CKBalloonChatItem

@property (retain, nonatomic) FMFLocation *lastKnownLocation;
@property (readonly, nonatomic) long long offerState;
@property (readonly, weak, nonatomic) IMHandle *sender;
@property (readonly, weak, nonatomic) NSString *titleText;
@property (readonly, weak, nonatomic) NSString *locationText;

+ (id)placeholderPreviewCache;
+ (id)titleBarMaskImageForWidth:(double)a0;

- (id)previewURL;
- (id)time;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)failed;
- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (void)_handleLocationDidChangeNotification:(id)a0;
- (id)_previewCacheKey:(unsigned long long)a0;
- (id)previewURLForWidth:(unsigned long long)a0;
- (id)savedPreviewFromURL:(id)a0;
- (id)_desaturatedImageForImage:(id)a0;
- (id)_placeholderCacheKey;
- (void)_generateMapPreview;
- (void)savePreview:(id)a0 toURL:(id)a1;
- (BOOL)shouldUpdatePreviewWithLocation:(id)a0 lastKnownLocation:(id)a1 previewURL:(id)a2;
- (id)transcriptTraitCollection;
- (id)_generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 withCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2 forState:(long long)a3;
- (id)modificationDateForPreview:(id)a0;
- (Class)balloonViewClass;
- (void)configureBalloonView:(id)a0;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (id)_generatePlaceholderThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isFromMe;

@end
