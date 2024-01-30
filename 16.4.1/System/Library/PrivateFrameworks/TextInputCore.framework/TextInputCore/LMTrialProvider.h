@class NSString;

@interface LMTrialProvider : NSObject <LMTrialProvider>

@property (copy) id /* block */ updateCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
