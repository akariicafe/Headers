@class EKObjectID;

@interface EKEventChange : EKCalendarItemChange

@property (readonly, nonatomic) BOOL availabilityChanged;
@property (readonly, nonatomic) BOOL privacyLevelChanged;
@property (readonly, nonatomic) BOOL travelTimeChanged;
@property (readonly, nonatomic) BOOL travelStartLocationChanged;
@property (readonly, nonatomic) BOOL statusChanged;
@property (readonly, nonatomic) EKObjectID *originalItemID;

+ (int)entityType;

- (void).cxx_destruct;
- (id)initWithChangeProperties:(id)a0;

@end
