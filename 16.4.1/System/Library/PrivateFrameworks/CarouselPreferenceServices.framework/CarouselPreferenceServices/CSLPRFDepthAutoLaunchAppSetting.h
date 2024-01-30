@class NSString, CSLPRFTwoWaySyncSetting;
@protocol CSLPRFDepthAutoLaunchAppSettingDelegate;

@interface CSLPRFDepthAutoLaunchAppSetting : NSObject <CSLPRFTwoWaySyncSettingDelegate, CSLPRFSessionAutoLaunchSetting> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) CSLPRFTwoWaySyncSetting *bundleIDSetting;
@property (retain, nonatomic) CSLPRFTwoWaySyncSetting *changeSourceSetting;
@property (retain, nonatomic) CSLPRFTwoWaySyncSetting *enabledSetting;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *bundleID;
@property (readonly, weak, nonatomic) id<CSLPRFDepthAutoLaunchAppSettingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property unsigned long long changeSource;

- (void)_commonInit;
- (void)_withLock:(id /* block */)a0;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setBundleID:(id)a0 changeSource:(unsigned long long)a1;
- (void)setEnabled:(BOOL)a0 changeSource:(unsigned long long)a1;
- (void)twoWaySyncSettingDidUpdate:(id)a0;

@end
