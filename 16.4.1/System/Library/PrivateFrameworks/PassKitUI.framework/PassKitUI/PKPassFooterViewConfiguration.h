@class PKPass, PKPassView;

@interface PKPassFooterViewConfiguration : NSObject

@property (readonly, nonatomic) PKPassView *passView;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) PKPass *pass;

- (id)pass;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPassView:(id)a0 state:(long long)a1;

@end
