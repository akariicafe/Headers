@class HFItem, HFItemUpdateOutcome, NAFuture;

@interface _HFItemUpdateFutureWrapper : NSObject

@property (retain, nonatomic) NAFuture *future;
@property (retain, nonatomic) HFItem *item;
@property (nonatomic) BOOL isInternal;
@property (retain, nonatomic) HFItemUpdateOutcome *outcome;

+ (id)futuresFromWrappers:(id)a0;
+ (id)wrapperWithFuture:(id)a0 item:(id)a1 isInternal:(BOOL)a2;

- (void).cxx_destruct;

@end
