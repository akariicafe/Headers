@class NSString, AKAppleIDAuthenticationController;
@protocol AKFollowUpProvider;

@interface AKFollowUpSynchronizer : NSObject <AKAppleIDAuthenticationDelegate>

@property (retain, nonatomic) id<AKFollowUpProvider> followupProvider;
@property (retain, nonatomic) AKAppleIDAuthenticationController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateSynchronizeTimeForAccount:(id)a0 inStore:(id)a1;
+ (void)updateSynchronizeTimeNoSaveForAccount:(id)a0;

- (BOOL)authenticationController:(id)a0 shouldContinueWithAuthenticationResults:(id)a1 error:(id)a2 forContext:(id)a3;
- (id)_authController;
- (void).cxx_destruct;
- (BOOL)shouldSynchronizeForAccount:(id)a0;
- (BOOL)synchronizeFollowUpsForAccount:(id)a0 inStore:(id)a1 error:(id *)a2;

@end
