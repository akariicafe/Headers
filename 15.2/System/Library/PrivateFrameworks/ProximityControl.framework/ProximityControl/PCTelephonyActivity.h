@class UIImage;

@interface PCTelephonyActivity : NSUserActivity <PCActivity> {
    UIImage *_callImage;
    BOOL _hostedOnCurrentDeviceIsValid;
    BOOL _hostedOnCurrentDevice;
}

- (id)displayName;
- (id)title;
- (id)contactIdentifier;
- (id)activityString;
- (id)description;
- (id)callUUID;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (id)bundleIdentifier;
- (id)initWithActivity:(id)a0;
- (BOOL)isValid;
- (id)dateConnected;
- (BOOL)hostedOnCurrentDevice;
- (unsigned long long)pcactivityType;
- (id)initFromSensitiveCall:(id)a0;
- (id)initFromKnownCall:(id)a0;
- (id)callImage;
- (BOOL)hostedOnCurrentDeviceIsValid;

@end
