@class INSleepAlarmAttribute, NSString, NSDateComponents, INSpeakableString, NSNumber;

@interface INAlarm : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDateComponents *dateTime;
@property (readonly, copy, nonatomic) INSpeakableString *label;
@property (readonly, copy, nonatomic) NSNumber *enabled;
@property (readonly, copy, nonatomic) NSNumber *firing;
@property (readonly, nonatomic) unsigned long long alarmRepeatScheduleOptions;
@property (readonly, copy, nonatomic) INSleepAlarmAttribute *sleepAlarmAttribute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 dateTime:(id)a1 label:(id)a2 enabled:(id)a3 firing:(id)a4 alarmRepeatScheduleOptions:(unsigned long long)a5 sleepAlarmAttribute:(id)a6;

@end
