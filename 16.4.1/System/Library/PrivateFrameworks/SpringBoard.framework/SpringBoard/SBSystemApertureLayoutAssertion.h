@class NSString, NSMutableSet, NSDate;

@interface SBSystemApertureLayoutAssertion : NSObject <SAInvalidatable> {
    id /* block */ _invalidationHandler;
    NSMutableSet *_invalidationBlocks;
}

@property (readonly, nonatomic) long long maximumPermittedLayoutMode;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateWithReason:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)addInvalidationBlock:(id /* block */)a0;
- (id)initWithMaximumPermittedLayoutMode:(long long)a0 reason:(id)a1 invalidationHandler:(id /* block */)a2;

@end
