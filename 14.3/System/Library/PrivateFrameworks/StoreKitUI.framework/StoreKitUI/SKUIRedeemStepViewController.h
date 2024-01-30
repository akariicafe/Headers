@class NSOperationQueue, SKUIClientContext, SKUIRedeemConfiguration;
@protocol SKUIRedeemStepDelegate;

@interface SKUIRedeemStepViewController : UIViewController

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (retain, nonatomic) SKUIRedeemConfiguration *configuration;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) BOOL shouldShowPassbookLearnMore;
@property (weak, nonatomic) id<SKUIRedeemStepDelegate> redeemStepDelegate;

- (void).cxx_destruct;

@end
