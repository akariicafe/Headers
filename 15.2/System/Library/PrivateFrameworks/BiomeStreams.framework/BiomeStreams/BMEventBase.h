@class NSArray, NSString;

@interface BMEventBase : NSObject <BMStreamValidating>

@property (copy, nonatomic) NSArray *_validators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)valueForKeyPath:(id)a0;

@end
