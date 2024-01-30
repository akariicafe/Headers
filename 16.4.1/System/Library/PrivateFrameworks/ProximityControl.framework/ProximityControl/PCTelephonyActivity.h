@class UIImage;

@interface PCTelephonyActivity : NSUserActivity <PCActivity> {
    UIImage *_callImage;
    BOOL _hostedOnCurrentDeviceIsValid;
    BOOL _hostedOnCurrentDevice;
}

- (id)contactIdentifier;
- (id)displayName;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)image;
- (id)bundleIdentifier;
- (id)title;
- (id)activityString;
- (id)description;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;
- (id)callUUID;
- (id)dateConnected;
- (BOOL)hostedOnCurrentDevice;
- (unsigned long long)pcactivityType;
- (id)callImage;
- (BOOL)hostedOnCurrentDeviceIsValid;
- (id)initFromKnownCall:(id)a0;
- (id)initFromSensitiveCall:(id)a0;

@end
