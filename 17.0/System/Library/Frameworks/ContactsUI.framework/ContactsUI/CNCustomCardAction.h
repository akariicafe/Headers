@class NSString, CNContactTargetActionWrapper;

@interface CNCustomCardAction : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) CNContactTargetActionWrapper *targetActionWrapper;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) long long placement;
@property (readonly, nonatomic, getter=isDestructive) BOOL destructive;
@property (readonly, nonatomic) id /* block */ menuProvider;

+ (id)groupForActionGivenPlacement:(long long)a0 inContactContentViewController:(id)a1;
+ (long long)placementForGroup:(id)a0 inContactContentViewController:(id)a1;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 targetActionWrapper:(id)a1 contactIdentifier:(id)a2 placement:(long long)a3 isDestructive:(BOOL)a4 menuProvider:(id /* block */)a5;
- (BOOL)isValidForContact:(id)a0;
- (BOOL)matchesTarget:(id)a0 selector:(SEL)a1 group:(id)a2 inContactContentViewController:(id)a3;

@end
