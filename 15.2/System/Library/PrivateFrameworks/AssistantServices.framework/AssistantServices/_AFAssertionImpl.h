@class NSUUID, AFAssertionContext, NSString, AFTwoArgumentSafetyBlock;

@interface _AFAssertionImpl : NSObject <AFAssertion> {
    AFTwoArgumentSafetyBlock *_relinquishmentHandler;
}

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) AFAssertionContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
