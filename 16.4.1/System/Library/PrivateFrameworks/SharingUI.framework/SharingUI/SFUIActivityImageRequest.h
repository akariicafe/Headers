@class NSString, UIActivity, UIImageSymbolConfiguration;

@interface SFUIActivityImageRequest : SFUIImageRequest

@property (readonly, nonatomic) long long activityCategory;
@property (readonly, nonatomic) NSString *contentSizeCategory;
@property (readonly, nonatomic) UIActivity *activity;
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;

- (void).cxx_destruct;
- (id)initWithRequestID:(int)a0 activity:(id)a1 contentSizeCategory:(id)a2 imageSymbolConfiguration:(id)a3 synchronous:(BOOL)a4 resultHandler:(id /* block */)a5;
- (id)initWithRequestID:(int)a0 identifier:(id)a1 activityCategory:(long long)a2 contentSizeCategory:(id)a3 synchronous:(BOOL)a4 resultHandler:(id /* block */)a5;

@end
