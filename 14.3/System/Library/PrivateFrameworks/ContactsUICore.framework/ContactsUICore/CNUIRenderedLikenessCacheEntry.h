@class NSArray, CNUILikenessRenderingScope, CNObservable;
@protocol CNCancelable;

@interface CNUIRenderedLikenessCacheEntry : NSObject

@property (readonly, nonatomic) id<CNCancelable> token;
@property (readonly, nonatomic) CNObservable *imageObservable;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) CNUILikenessRenderingScope *scope;

+ (id)entryWithObservable:(id)a0 token:(id)a1 contacts:(id)a2 scope:(id)a3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithObservable:(id)a0 token:(id)a1 contacts:(id)a2 scope:(id)a3;

@end
