@class NSString;

@interface MRDestinationResolverHelper : NSObject <MRDestinationResolverDelegate>

@property (nonatomic) long long level;
@property (copy, nonatomic) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)destinationResolver:(id)a0 didFailWithError:(id)a1;
- (void)destinationResolver:(id)a0 endpointDidChange:(id)a1;
- (void)destinationResolver:(id)a0 originDidChange:(id)a1;
- (void)destinationResolver:(id)a0 playerPathDidChange:(id)a1;
- (void)destinationResolverDestinationDidInvalidate:(id)a0;

@end
