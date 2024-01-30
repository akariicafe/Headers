@class FMFLocation, IMHandle, NSString;

@interface CKLocationShareOfferChatItem : CKBalloonChatItem

@property (retain, nonatomic) FMFLocation *lastKnownLocation;
@property (readonly, nonatomic) long long offerState;
@property (readonly, weak, nonatomic) IMHandle *sender;
@property (readonly, weak, nonatomic) NSString *titleText;
@property (readonly, weak, nonatomic) NSString *locationText;

+ (id)placeholderPreviewCache;
+ (id)titleBarMaskImageForWidth:(double)a0;

- (id)initWithIMChatItem:(id)a0 maxWidth:(double)a1;
- (void)_handleLocationDidChangeNotification:(id)a0;
- (id)previewURLForWidth:(unsigned long long)a0;
- (id)savedPreviewFromURL:(id)a0;
- (id)_desaturatedImageForImage:(id)a0;
- (id)_placeholderCacheKey;
- (void)_generateMapPreview;
- (BOOL)shouldUpdatePreviewWithLocation:(id)a0 lastKnownLocation:(id)a1 previewURL:(id)a2;
- (id)transcriptTraitCollection;
- (id)_generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 withCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2 forState:(long long)a3;
- (void)savePreview:(id)a0 toURL:(id)a1;
- (Class)balloonViewClass;
- (id)modificationDateForPreview:(id)a0;
- (void)configureBalloonView:(id)a0;
- (id)previewForWidth:(double)a0 orientation:(char)a1;
- (id)_generatePlaceholderThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0;
- (id)time;
- (BOOL)isFromMe;
- (id)previewURL;
- (void).cxx_destruct;
- (BOOL)failed;
- (void)dealloc;
- (id)_previewCacheKey:(unsigned long long)a0;

@end
