@class NSString;

@interface HMHomeManagerDelegateAdapter : NSObject <HMHomeManagerDelegate>

@property (copy) id /* block */ didUpdateHomes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)homeManagerDidUpdateHomes:(id)a0;
- (void).cxx_destruct;

@end
