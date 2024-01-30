@interface _GCHapticEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) long long type;
@property (nonatomic) long long subtype;
@property (nonatomic) double startTime;
@property (nonatomic) double intensity;
@property (nonatomic) double sharpness;
@property (nonatomic) BOOL stopped;
@property (nonatomic) BOOL transientBeganAsContinuousEvent;

- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (struct pair<bool, float> { BOOL x0; float x1; })valueForNoteParam:(unsigned int)a0 inParameters:(id)a1;
- (void)evaluateDeviceNoteParams:(id)a0;
- (id)initWithSyntheticCommand:(id)a0;

@end
