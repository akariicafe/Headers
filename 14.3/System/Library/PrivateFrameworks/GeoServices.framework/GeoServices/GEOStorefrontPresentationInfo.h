@class NSURL, GEOStorefrontView;

@interface GEOStorefrontPresentationInfo : NSObject

@property (readonly, nonatomic) GEOStorefrontView *closeUpView;
@property (readonly, nonatomic) GEOStorefrontView *standOffView;
@property (readonly, nonatomic) NSURL *overlayImageURL;

- (id)initWithStorefrontPresentation:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
