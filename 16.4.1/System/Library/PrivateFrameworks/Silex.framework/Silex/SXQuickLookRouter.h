@class NSString;
@protocol TFResolver;

@interface SXQuickLookRouter : NSObject <SXQuickLookRouter>

@property (readonly, nonatomic) id<TFResolver> resolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResolver:(id)a0;
- (void).cxx_destruct;
- (void)presentFile:(id)a0 transitionContext:(id)a1;

@end
