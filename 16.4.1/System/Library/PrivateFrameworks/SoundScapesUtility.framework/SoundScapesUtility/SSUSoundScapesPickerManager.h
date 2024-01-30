@class NSString, NSMapTable;

@interface SSUSoundScapesPickerManager : NSObject <_EXHostViewControllerDelegate> {
    NSMapTable *_targetMediaProfile;
    NSMapTable *_delegates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;
+ (id)pickerForMediaProfileContainers:(id)a0 forDelegate:(id)a1;
+ (BOOL)pickerSupportHome:(id)a0 targetMediaProfileContainers:(id)a1;
+ (id)pickerIdentity;

- (id)init;
- (void).cxx_destruct;
- (void)hostViewControllerDidActivate:(id)a0;
- (void)hostViewControllerWillDeactivate:(id)a0 error:(id)a1;
- (void)registerViewController:(id)a0 forMediaProfiles:(id)a1 andDelegate:(id)a2;

@end
