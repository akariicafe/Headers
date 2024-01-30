@class NSString;
@protocol PXGadget;

@interface PXGadgetNavigationItem : NSObject

@property (readonly, nonatomic) long long navigationType;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) NSString *gadgetId;
@property (readonly, nonatomic) id<PXGadget> gadget;
@property (readonly, copy, nonatomic) id /* block */ navigationBlock;
@property (readonly, nonatomic) BOOL animated;

- (void).cxx_destruct;
- (id)initWithGadetType:(unsigned long long)a0 navigationBlock:(id /* block */)a1 animated:(BOOL)a2;
- (id)initWithGadgetId:(id)a0 navigationBlock:(id /* block */)a1 animated:(BOOL)a2;
- (id)initWithGadget:(id)a0 navigationBlock:(id /* block */)a1 animated:(BOOL)a2;

@end
