@class Protocol;
@protocol PROPlugInFirewallErrorHandler;

@interface PROPlugInFirewall : NSObject {
    id<PROPlugInFirewallErrorHandler> errorHandler;
    id protectedObject;
    Protocol *protocol;
    Protocol *secondaryProtocol;
}

+ (void)doesNotRecognizeSelector:(SEL)a0;
+ (id)methodSignatureForSelector:(SEL)a0;
+ (void)forwardInvocation:(id)a0;
+ (void)deadMethod;

- (void)doesNotRecognizeSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (void)dealloc;
- (id)initWithProtectedObject:(id)a0 protocol:(id)a1 secondaryProtocol:(id)a2 errorHandler:(id)a3;
- (void)deadMethod;
- (id)protectedObject;

@end
