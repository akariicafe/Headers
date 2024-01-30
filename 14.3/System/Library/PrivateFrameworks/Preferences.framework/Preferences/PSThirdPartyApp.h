@class NSString, LSApplicationProxy;

@interface PSThirdPartyApp : NSObject {
    NSString *_localizedName;
}

@property (readonly, nonatomic) LSApplicationProxy *proxy;

- (void)load;
- (void).cxx_destruct;
- (id)initWithApplicationProxy:(id)a0;
- (id)localizedName;
- (id)description;

@end
