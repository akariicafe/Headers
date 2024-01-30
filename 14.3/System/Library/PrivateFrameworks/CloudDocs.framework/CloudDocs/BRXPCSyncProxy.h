@class NSError, NSObject;

@interface BRXPCSyncProxy : NSProxy {
    NSObject *_target;
}

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id result;

- (void)setObjResult:(id)a0 error:(id)a1;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (void)setBoolResult:(BOOL)a0 error:(id)a1;

@end
