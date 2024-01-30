@class NSString;

@interface Settings.SidebarItem : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ $__lazy_storage_$_icon;
    void /* unknown type, empty encoding */ iconFromBundleID;
    void /* unknown type, empty encoding */ flexibleWidth;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ subtext;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ iconUTTypeIdentifier;
    void /* unknown type, empty encoding */ badgeCount;
    void /* unknown type, empty encoding */ tooltip;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
