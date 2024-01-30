@interface PCCKey : NSObject

@property struct pcc_invocation_key { unsigned char x0[32]; } *secret;

- (void)dealloc;
- (id)init;
- (void)clear;
- (id)decrypt:(id)a0;
- (id)encrypt:(id)a0;

@end
