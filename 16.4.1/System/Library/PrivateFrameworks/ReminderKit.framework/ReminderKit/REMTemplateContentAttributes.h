@interface REMTemplateContentAttributes : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long reminderCount;
@property (readonly, nonatomic) BOOL hasDisplayDate;
@property (readonly, nonatomic) BOOL hasHashtags;
@property (readonly, nonatomic) BOOL hasLocationTriggersOrVehicleEventTriggers;
@property (readonly, nonatomic) BOOL hasImageAttachments;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithReminderCount:(long long)a0 hasDisplayDate:(BOOL)a1 hasHashtags:(BOOL)a2 hasLocationTriggersOrVehicleEventTriggers:(BOOL)a3 hasImageAttachments:(BOOL)a4;

@end
