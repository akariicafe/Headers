@class NSString;

@interface CUOSStateHandler : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) unsigned long long stateHandle;
@property (copy, nonatomic) NSString *title;

- (void)remove;
- (void)dealloc;
- (void).cxx_destruct;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_generateState;
- (id)initWithTitle:(id)a0 dispatchQueue:(id)a1 handler:(id /* block */)a2;

@end
