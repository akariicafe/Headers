@class NSString, NSDictionary, NSArray;

@interface SSConnectionOptions : NSObject

@property long long authMethod;
@property BOOL connectingToIOSdevice;
@property long long controlType;
@property (retain) NSString *deviceID;
@property (retain) NSString *displayName;
@property (copy) NSDictionary *hints;
@property (retain) NSString *idsDestination;
@property struct CGSize { double width; double height; } maxSize;
@property long long minimumEncryptionLevel;
@property BOOL noReconnect;
@property BOOL openInFullScreen;
@property long long panningMode;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } restoreContentFrame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } restoreWindowFrame;
@property long long screenQualityMode;
@property unsigned long long selectedScreen;
@property long long sessionSelectionAction;
@property BOOL shouldCurtainScreen;
@property BOOL shouldFallbackToObserve;
@property BOOL shouldGetUserInfo;
@property BOOL shouldScaleScreen;
@property BOOL shouldSharePasteboard;
@property BOOL shouldReturnToAddressBox;
@property BOOL showConnectionProgress;
@property BOOL skipAddressPresentation;
@property BOOL skipUserPassDialogIfPossible;
@property (copy) NSArray *videoEncodings;

+ (id)defaultOptions;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
