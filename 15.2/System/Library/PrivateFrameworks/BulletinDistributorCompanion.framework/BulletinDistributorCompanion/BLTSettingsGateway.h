@class BBSettingsGateway, NSLock;

@interface BLTSettingsGateway : NSObject {
    BBSettingsGateway *_actualSettingsGateway;
    NSLock *_actualSettingsGatewayLock;
    int _token;
}

+ (BOOL)instancesRespondToSelector:(SEL)a0;
+ (id)surrogateWithQueue:(id)a0;

- (id)initWithQueue:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;

@end
