@protocol AMSUIPurchaseDelegate;

@interface AMSUIPurchaseTask : AMSPurchaseTask

@property (weak, nonatomic) id<AMSUIPurchaseDelegate> delegate;

- (Class)paymentSheetTaskClass;

@end
