@class NSUUID, NSString, NSDate, DNDClientEventBehavior;

@interface DNDSEventBehaviorResolution : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) DNDClientEventBehavior *eventBehavior;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) unsigned long long outcome;
@property (readonly, nonatomic) unsigned long long reason;

+ (id)resolutionForDate:(id)a0 eventBehavior:(id)a1 clientIdentifier:(id)a2 outcome:(unsigned long long)a3 reason:(unsigned long long)a4;

- (id)_descriptionForRedacted:(BOOL)a0;
- (id)redactedDescription;
- (id)_initWithUUID:(id)a0 date:(id)a1 eventBehavior:(id)a2 clientIdentifier:(id)a3 outcome:(unsigned long long)a4 reason:(unsigned long long)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
