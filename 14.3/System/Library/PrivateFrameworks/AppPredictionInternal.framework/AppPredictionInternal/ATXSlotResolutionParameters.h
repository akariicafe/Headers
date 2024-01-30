@class ATXAction, ATXSlotSet, NSArray;

@interface ATXSlotResolutionParameters : NSObject <NSCopying> {
    ATXAction *_action;
    ATXSlotSet *_slots;
    NSArray *_values;
    unsigned long long _hash;
}

- (id)initWithAction:(id)a0 slots:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
