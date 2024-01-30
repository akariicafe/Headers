@class NSString;

@interface TRNetworkOperationHandler : NSObject <TROperationHandler>

@property (copy, nonatomic) id /* block */ joinNetworkHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
