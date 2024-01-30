@class ATXAction, ATXSlotSet, NSArray;

@interface ATXSlotResolutionParameters : NSObject <NSCopying> {
    ATXAction *_action;
    ATXSlotSet *_slots;
    NSArray *_values;
    unsigned long long _hash;
}

- (id)initWithAction:(id)a0 slots:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
