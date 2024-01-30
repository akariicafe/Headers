@class NSString, LSApplicationProxy;

@interface PSThirdPartyApp : NSObject {
    NSString *_localizedName;
}

@property (readonly, nonatomic) LSApplicationProxy *proxy;

- (id)localizedName;
- (id)description;
- (void).cxx_destruct;
- (void)load;
- (id)initWithApplicationProxy:(id)a0;

@end
