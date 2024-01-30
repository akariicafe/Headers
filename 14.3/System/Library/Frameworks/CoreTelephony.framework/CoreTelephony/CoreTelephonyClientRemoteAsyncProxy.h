@class NSString, NSObject;
@protocol CTXPCServiceInterface;

@interface CoreTelephonyClientRemoteAsyncProxy : NSProxy <CTXPCServiceInterface> {
    NSObject<CTXPCServiceInterface> *_target;
    struct queue { struct object { struct dispatch_object_s *fObj; } fObj; } _userQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithXPCObject:(id)a0 userQueue:(struct queue { struct object { struct dispatch_object_s *x0; } x0; })a1 errorHandler:(id /* block */)a2;

@end
