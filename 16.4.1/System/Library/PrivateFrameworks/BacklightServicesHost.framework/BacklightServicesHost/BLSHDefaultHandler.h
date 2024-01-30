@class NSString, BLSAttribute, BLSAssertion;

@interface BLSHDefaultHandler : NSObject <BSInvalidatable> {
    NSString *_key;
    BLSAttribute *_attribute;
    BLSAssertion *_lock_assertion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlerForKey:(id)a0 attribute:(id)a1;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0 attribute:(id)a1;
- (void)updateForNewValue:(BOOL)a0;

@end
