@class NSMutableDictionary;

@interface VCImageAttributeRules : NSObject

@property (retain, nonatomic) NSMutableDictionary *imageAttributeRules;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)extractDimensionsForInterface:(int)a0 direction:(int)a1;
- (void)swapSendAndReceiveRules;
- (void)addRuleForVideoPayload:(int)a0 withDirection:(int)a1 width:(int)a2 height:(int)a3 frameRate:(int)a4 priority:(int)a5 interface:(int)a6;
- (void)interfaceKey:(id *)a0 forInterface:(int)a1 directionKey:(id *)a2 forDirection:(int)a3;

@end
