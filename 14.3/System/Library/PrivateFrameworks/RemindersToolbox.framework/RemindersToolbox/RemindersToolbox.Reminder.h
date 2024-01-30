@class NSString;

@interface RemindersToolbox.Reminder : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ isCompleted;
    void /* unknown type, empty encoding */ flagged;
    void /* unknown type, empty encoding */ dueDate;
    void /* unknown type, empty encoding */ locationTrigger;
    void /* unknown type, empty encoding */ contactTrigger;
    void /* unknown type, empty encoding */ subtasks;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
