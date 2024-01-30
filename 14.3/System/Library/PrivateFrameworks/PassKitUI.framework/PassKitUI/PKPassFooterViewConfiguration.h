@class PKPass, PKPassView;

@interface PKPassFooterViewConfiguration : NSObject

@property (readonly, nonatomic) PKPassView *passView;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) PKPass *pass;

- (id)initWithPassView:(id)a0 state:(long long)a1;
- (id)pass;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
