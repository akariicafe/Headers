@class NSString, NSObject;

@interface TMLAspect : NSObject

@property (weak, nonatomic) NSObject *target;
@property (nonatomic) int advice;
@property (copy, nonatomic) NSString *signalName;
@property (copy, nonatomic) id /* block */ block;
@property (copy, nonatomic) id /* block */ unregisterBlock;
@property (readonly, nonatomic) NSString *registrationKey;

+ (id)aspectForObjectsWithClassNamed:(id)a0 signalOrMethodName:(id)a1 advice:(int)a2 block:(id /* block */)a3;
+ (id)aspectForObjectsImplementingProtocolNamed:(id)a0 signalOrMethodName:(id)a1 advice:(int)a2 block:(id /* block */)a3;
+ (id)aspectForRegistrationKey:(id)a0 signalOrMethodName:(id)a1 advice:(int)a2 block:(id /* block */)a3;
+ (id)aspectForTarget:(id)a0 signalOrMethodName:(id)a1 advice:(int)a2 block:(id /* block */)a3;
+ (id /* block */)jsConvertedBlock:(id)a0;
+ (id)tmlAspectForObjectsImplementingProtocolNamed:(id)a0 signalOrMethodName:(id)a1 advice:(int)a2;
+ (id)tmlAspectForObjectsWithClassNamed:(id)a0 signalOrMethodName:(id)a1 advice:(int)a2;
+ (id)tmlAspectForTarget:(id)a0 signalOrMethodName:(id)a1 advice:(int)a2;

- (void)unregister;
- (void)dealloc;
- (void).cxx_destruct;
- (void)tmlDispose;
- (void)activateWithObject:(id)a0 arguments:(id)a1 returnValue:(id)a2 newArguments:(id *)a3 newReturnValue:(id *)a4;

@end
