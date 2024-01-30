@class NSString;

@interface REElementComplicationAction : REElementAction

@property (readonly, nonatomic) NSString *slotIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)_performWithContext:(id)a0;
- (id)initWithSlotIdentifier:(id)a0;

@end
