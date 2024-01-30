@class NSString, CNContactTargetActionWrapper;

@interface CNCustomCardAction : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) CNContactTargetActionWrapper *targetActionWrapper;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) long long placement;
@property (readonly, nonatomic, getter=isDestructive) BOOL destructive;

+ (long long)placementForGroup:(id)a0 inContactContentViewController:(id)a1;
+ (id)groupForActionGivenPlacement:(long long)a0 inContactContentViewController:(id)a1;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 targetActionWrapper:(id)a1 contactIdentifier:(id)a2 placement:(long long)a3 isDesctructive:(BOOL)a4;
- (BOOL)isValidForContact:(id)a0;
- (BOOL)matchesTarget:(id)a0 selector:(SEL)a1 group:(id)a2 inContactContentViewController:(id)a3;

@end
