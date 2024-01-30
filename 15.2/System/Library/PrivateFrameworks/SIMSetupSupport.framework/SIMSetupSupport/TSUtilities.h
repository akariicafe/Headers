@interface TSUtilities : NSObject

+ (id)formattedPhoneNumber:(id)a0 withCountryCode:(id)a1;
+ (id)backgroundColorForRemotePlan:(BOOL)a0;
+ (id)getErrorTitleDetail:(id)a0 forCarrier:(id)a1;
+ (unsigned long long)transferablePlans:(id)a0;
+ (unsigned long long)odaPlans:(id)a0;
+ (id)preinstallPPRAlertControllerWithItems:(id)a0 completion:(id /* block */)a1;
+ (id)textColorForRemotePlan:(BOOL)a0;
+ (id)_findPPRItem:(id)a0;

@end
