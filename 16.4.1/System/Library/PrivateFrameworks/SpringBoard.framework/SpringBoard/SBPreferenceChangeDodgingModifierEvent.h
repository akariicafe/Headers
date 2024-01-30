@class NSString;

@interface SBPreferenceChangeDodgingModifierEvent : SBDodgingModifierEvent

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long phase;
@property (readonly, nonatomic) unsigned long long style;

- (unsigned long long)type;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 phase:(unsigned long long)a1 style:(unsigned long long)a2;

@end
