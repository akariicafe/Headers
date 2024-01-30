@interface PCCKey : NSObject

@property struct pcc_invocation_key { unsigned char x0[32]; } *secret;

- (id)decrypt:(id)a0;
- (void)clear;
- (id)init;
- (void)dealloc;
- (id)encrypt:(id)a0;

@end
