@class NSDictionary;

@interface PHASERouteChangeInfoImpl : NSObject <PHASERouteChangeInfo> {
    NSDictionary *_description;
}

@property (readonly, nonatomic) NSDictionary *description;

- (id)initWithDescription:(id)a0;
- (void).cxx_destruct;

@end
