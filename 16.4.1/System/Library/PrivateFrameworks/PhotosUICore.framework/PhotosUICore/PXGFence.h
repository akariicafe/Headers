@class PXGLayout;

@interface PXGFence : NSObject

@property (readonly, weak, nonatomic) PXGLayout *layout;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) double timeout;

- (id)initWithLayout:(id)a0 type:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
