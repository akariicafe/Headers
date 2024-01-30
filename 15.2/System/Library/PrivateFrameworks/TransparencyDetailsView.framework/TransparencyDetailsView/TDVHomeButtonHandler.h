@class NSString;
@protocol BSInvalidatable;

@interface TDVHomeButtonHandler : NSObject <SBSHardwareButtonEventConsuming>

@property (retain, nonatomic) id<BSInvalidatable> homeButtonAssertion;
@property (copy, nonatomic) id /* block */ homeButtonHandlerCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handlerWithCompletion:(id /* block */)a0;

- (void)consumeSinglePressUpForButtonKind:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (void)startConsumingHardwarePresses:(id /* block */)a0;
- (void)stopConsumingHardwarePresses;

@end
