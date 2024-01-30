@class NSNumber, NSString, INSpeakableString, INDateComponentsRange;

@interface INAlarmSearch : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long alarmReferenceType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) INDateComponentsRange *time;
@property (readonly, copy, nonatomic) INSpeakableString *label;
@property (readonly, nonatomic) long long alarmSearchStatus;
@property (readonly, copy, nonatomic) NSNumber *includeSleepAlarm;
@property (readonly, nonatomic) long long period;
@property (readonly, copy, nonatomic) NSNumber *isMeridianInferred;
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
- (id)initWithAlarmReferenceType:(long long)a0 identifier:(id)a1 time:(id)a2 label:(id)a3 alarmSearchStatus:(long long)a4 includeSleepAlarm:(id)a5 period:(long long)a6 isMeridianInferred:(id)a7;

@end
