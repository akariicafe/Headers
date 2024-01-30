@class NSString, LSApplicationProxy;

@interface PSThirdPartyApp : NSObject {
    NSString *_localizedName;
}

@property (readonly, nonatomic) LSApplicationProxy *proxy;

- (id)initWithApplicationProxy:(id)a0;
- (id)localizedName;
- (void)load;
- (id)description;
- (void).cxx_destruct;

@end
