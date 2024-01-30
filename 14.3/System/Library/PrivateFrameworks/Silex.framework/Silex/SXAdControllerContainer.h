@class NSString, SXAdController;

@interface SXAdControllerContainer : NSObject <SXAdControllerContainer>

@property (readonly, nonatomic) SXAdController *adController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerAdController:(id)a0;

@end
