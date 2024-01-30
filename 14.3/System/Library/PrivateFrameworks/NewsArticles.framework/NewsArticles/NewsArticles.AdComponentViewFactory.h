@class NSString;

@interface NewsArticles.AdComponentViewFactory : NSObject <SXComponentViewFactory> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ resolver;
    void /* unknown type, empty encoding */ bannerAdFactory;
    void /* unknown type, empty encoding */ integrator;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ role;

- (id)init;
- (void).cxx_destruct;
- (id)componentViewForComponent:(id)a0;

@end
