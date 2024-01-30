@class AFSpeechRecordingAlertBehavior;

@interface AFSpeechRecordingAlertPolicy : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) AFSpeechRecordingAlertBehavior *startingAlertBehavior;
@property (readonly, copy, nonatomic) AFSpeechRecordingAlertBehavior *stoppedAlertBehavior;
@property (readonly, copy, nonatomic) AFSpeechRecordingAlertBehavior *stoppedWithErrorAlertBehavior;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithStartingAlertBehavior:(id)a0 stoppedAlertBehavior:(id)a1 stoppedWithErrorAlertBehavior:(id)a2;

@end
