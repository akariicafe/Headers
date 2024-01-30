@class AFTriggerlessListeningOptions;

@interface AFRequestCompletionOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) AFTriggerlessListeningOptions *triggerlessListeningOptions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithShowUIDuringListening:(BOOL)a0 playAlertBeforeListening:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
