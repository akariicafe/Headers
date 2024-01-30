@class NSString, CSLPRFTwoWaySyncSetting, CSLPRFDepthAutoLaunchAppSetting;
@protocol CSLPRFStingConfigurationDelegate;

@interface CSLPRFStingConfiguration : NSObject <CSLPRFTwoWaySyncSettingDelegate, CSLPRFDepthAutoLaunchAppSettingDelegate, CSLPRFStingConfigurationProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CSLPRFTwoWaySyncSetting *_stingSettings;
    CSLPRFDepthAutoLaunchAppSetting *_depthSetting;
}

@property (readonly, weak, nonatomic) id<CSLPRFStingConfigurationDelegate> delegate;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *workoutIdentifier;
@property (readonly, nonatomic) BOOL isActionSet;
@property (readonly, nonatomic) BOOL isActionNone;
@property (nonatomic) long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

- (void)_withLock:(id /* block */)a0;
- (void)setDelegate:(id)a0;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)_lock_settingsDictionary;
- (void)depthAutoLaunchAppSettingDidUpdate:(id)a0;
- (void)twoWaySyncSettingDidUpdate:(id)a0;

@end
