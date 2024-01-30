@class NSString;

@interface _SFBannerModel : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) id /* block */ dismissHandler;

+ (id)bannerWithTitle:(id)a0 message:(id)a1 dismissHandler:(id /* block */)a2;

- (void).cxx_destruct;

@end
