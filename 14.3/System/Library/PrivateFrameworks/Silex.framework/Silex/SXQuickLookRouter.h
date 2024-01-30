@class NSString;
@protocol NFResolver;

@interface SXQuickLookRouter : NSObject <SXQuickLookRouter>

@property (readonly, nonatomic) id<NFResolver> resolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithResolver:(id)a0;
- (void)presentFile:(id)a0 transitionContext:(id)a1;

@end
