@class NSString;

@interface REElementComplicationAction : REElementAction

@property (readonly, nonatomic) NSString *slotIdentifier;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)_performWithContext:(id)a0;
- (id)initWithSlotIdentifier:(id)a0;

@end
