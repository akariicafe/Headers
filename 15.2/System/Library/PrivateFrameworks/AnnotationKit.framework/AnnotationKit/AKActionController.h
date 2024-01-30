@class AKController;

@interface AKActionController : NSObject

@property (weak) AKController *controller;

- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)performActionForSender:(id)a0;
- (BOOL)validateSender:(id)a0;
- (void)performActionForSender:(id)a0 segment:(long long)a1;
- (BOOL)_isSenderEnabled:(id)a0 segment:(long long)a1;
- (BOOL)validateSender:(id)a0 segment:(long long)a1;
- (BOOL)isSenderEnabled:(id)a0;

@end
