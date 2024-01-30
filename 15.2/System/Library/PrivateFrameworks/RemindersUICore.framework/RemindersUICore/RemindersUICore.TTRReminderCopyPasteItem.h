@interface RemindersUICore.TTRReminderCopyPasteItem : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ storages;
    void /* unknown type, empty encoding */ titles;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
