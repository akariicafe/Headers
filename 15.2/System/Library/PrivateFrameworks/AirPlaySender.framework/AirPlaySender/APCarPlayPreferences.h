@class NSString, CRCarPlayPreferences;
@protocol APCarPlayPreferencesDelegate;

@interface APCarPlayPreferences : NSObject <CRCarPlayPreferencesDelegate> {
    CRCarPlayPreferences *_preferences;
}

@property (nonatomic) id<APCarPlayPreferencesDelegate> delegate;
@property (readonly, nonatomic, getter=isCarPlayEnabled) BOOL carPlayEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)handleCarPlayAllowedDidChange;
- (void)dealloc;

@end
