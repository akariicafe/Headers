@class NSArray, NSString;

@interface WFContextualAction : NSObject

@property (readonly, nonatomic) unsigned long long systemActionType;
@property (readonly, nonatomic) NSArray *matchingTypes;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isAlternate) BOOL alternate;
@property (readonly, copy, nonatomic) NSString *displayString;

+ (id)systemActionWithType:(unsigned long long)a0 identifier:(id)a1 displayString:(id)a2 inputTypes:(id)a3;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 matchingTypes:(id)a1 displayString:(id)a2 alternate:(BOOL)a3;

@end
