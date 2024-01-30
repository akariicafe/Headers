@class PKBannerPresentable;

@interface PKBannerPresentableRequest : NSObject

@property (readonly, nonatomic) PKBannerPresentable *presentable;
@property (readonly, nonatomic) id context;

+ (id)createWithPresentable:(id)a0 context:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
