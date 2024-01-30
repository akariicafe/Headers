@class NSString;
@protocol AVTUILogger, AVTTransitionModel;

@interface AVTTransition : NSObject <AVTTransition>

@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (nonatomic) long long state;
@property (nonatomic) BOOL animated;
@property (readonly, nonatomic) id<AVTTransitionModel> model;
@property (copy, nonatomic) id /* block */ setupHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)performTransition;
- (id)initWithModel:(id)a0 animated:(BOOL)a1 setupHandler:(id /* block */)a2 completionHandler:(id /* block */)a3 logger:(id)a4;
- (void)performCancellation;

@end
