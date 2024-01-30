@class NSString;

@interface REElementComplicationAction : REElementAction

@property (readonly, nonatomic) NSString *slotIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSlotIdentifier:(id)a0;
- (void)_performWithContext:(id)a0;

@end
