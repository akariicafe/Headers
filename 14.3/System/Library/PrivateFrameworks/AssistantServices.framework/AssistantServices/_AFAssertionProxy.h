@class NSUUID, AFAssertionContext, NSString, AFAssertionCoordinator, _AFAssertionImpl;

@interface _AFAssertionProxy : NSObject <AFRelinquishableAssertion> {
    _AFAssertionImpl *_impl;
    AFAssertionCoordinator *_coordinator;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) AFAssertionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)relinquishWithContext:(id)a0 options:(unsigned long long)a1;
- (void)relinquishWithError:(id)a0 options:(unsigned long long)a1;
- (id)initWithImpl:(id)a0 coordinator:(id)a1;

@end
