@interface SBSRemoteContentPreferences : NSObject <NSSecureCoding> {
    long long _dateTimeStyle;
    long long _backgroundStyle;
    long long _homeGestureMode;
    BOOL _reducesWhitePoint;
    BOOL _suppressesNotifications;
    BOOL _suppressesBottomEdgeContent;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (long long)backgroundStyle;
- (void)encodeWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (long long)dateTimeStyle;
- (long long)homeGestureMode;
- (id)init;
- (BOOL)reducesWhitePoint;
- (BOOL)suppressesNotifications;
- (BOOL)suppressesBottomEdgeContent;
- (id)initWithCoder:(id)a0;

@end
