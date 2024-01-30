@class NSString;

@interface TRActivationOperationHandler : NSObject <TROperationHandler>

@property (copy, nonatomic) id /* block */ activationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
