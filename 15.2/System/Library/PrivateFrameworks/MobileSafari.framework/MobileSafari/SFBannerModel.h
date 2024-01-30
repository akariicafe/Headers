@class UIImage, NSString;

@interface SFBannerModel : NSObject

@property (readonly, nonatomic) id /* block */ action;
@property (readonly, nonatomic) long long contentVariant;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) long long numberOfTrackers;
@property (nonatomic) long long userInterfaceStyle;

+ (id)bannerWithTitle:(id)a0 message:(id)a1 dismissHandler:(id /* block */)a2;
+ (id)bannerWithImage:(id)a0 title:(id)a1 message:(id)a2 dismissHandler:(id /* block */)a3;
+ (id)privacyReportBannerWithNumberOfTrackers:(long long)a0 selectionHandler:(id /* block */)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithContentVariant:(long long)a0 action:(id /* block */)a1;

@end
