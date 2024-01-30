@class NSString, SVXDeviceSetupOptions;

@interface _SVXDeviceSetupOptionsMutation : NSObject <SVXDeviceSetupOptionsMutating> {
    SVXDeviceSetupOptions *_baseModel;
    NSString *_languageCode;
    long long _gender;
    long long _hasActiveAccount;
    long long _isNewsRestricted;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasLanguageCode : 1; unsigned char hasGender : 1; unsigned char hasHasActiveAccount : 1; unsigned char hasIsNewsRestricted : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGender:(long long)a0;
- (void)setLanguageCode:(id)a0;
- (id)generate;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseModel:(id)a0;
- (void)setHasActiveAccount:(long long)a0;
- (void)setIsNewsRestricted:(long long)a0;

@end
