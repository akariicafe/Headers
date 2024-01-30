@class EMMessageRepository, MUICachingSVGConverter;
@protocol EFScheduler;

@interface MUIBrandIndicatorProvider : NSObject

@property (readonly, nonatomic) EMMessageRepository *messageRepository;
@property (readonly, nonatomic) MUICachingSVGConverter *svgConverter;
@property (readonly, nonatomic) id<EFScheduler> scheduler;

- (void).cxx_destruct;
- (id)brandIndicatorFutureForLocation:(id)a0;
- (id)brandIndicatorFutureForLocation:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithMessageRepository:(id)a0 svgConverter:(id)a1;

@end
