@interface Settings.SidebarConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ wantsAddButton;
    void /* unknown type, empty encoding */ wantsDeleteButton;
    void /* unknown type, empty encoding */ addButtonEnabled;
    void /* unknown type, empty encoding */ deleteButtonEnabled;
    void /* unknown type, empty encoding */ selection;
    void /* unknown type, empty encoding */ iconSize;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
