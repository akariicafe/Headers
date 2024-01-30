@interface SBSRemoteContentPreferences : NSObject <NSSecureCoding> {
    long long _dateTimeStyle;
    long long _backgroundStyle;
    long long _homeGestureMode;
    BOOL _reducesWhitePoint;
    BOOL _suppressesNotifications;
    BOOL _suppressesBottomEdgeContent;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (long long)backgroundStyle;
- (long long)dateTimeStyle;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (long long)homeGestureMode;
- (BOOL)reducesWhitePoint;
- (BOOL)suppressesNotifications;
- (BOOL)suppressesBottomEdgeContent;
- (void)encodeWithCoder:(id)a0;

@end
