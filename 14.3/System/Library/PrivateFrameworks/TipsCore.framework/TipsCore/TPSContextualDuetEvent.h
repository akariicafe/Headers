@class TPSContextualDuetEventMeta, NSString, TPSContextualDuetEventValue, TPSContextualDuetEventSource;

@interface TPSContextualDuetEvent : TPSContextualEvent

@property (copy, nonatomic) NSString *stream;
@property (copy, nonatomic) TPSContextualDuetEventMeta *meta;
@property (copy, nonatomic) TPSContextualDuetEventSource *source;
@property (copy, nonatomic) TPSContextualDuetEventValue *value;

+ (BOOL)supportsSecureCoding;
+ (id)classSet;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (id)newStateFromStateDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
