@class NSString;

@interface ReminderKitInternal.REMCustomSmartListFilterDescriptor : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ hashtags;
    void /* unknown type, empty encoding */ date;
    void /* unknown type, empty encoding */ time;
    void /* unknown type, empty encoding */ priorities;
    void /* unknown type, empty encoding */ flagged;
    void /* unknown type, empty encoding */ location;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
