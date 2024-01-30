@class NSObject;

@interface OBHollowButton : OBTrayButton

@property (retain, nonatomic) NSObject *target;
@property (nonatomic) SEL downPressSelector;
@property (nonatomic) SEL upLiftSelector;

+ (id)hollowButtonWithTarget:(id)a0 downPressSelector:(SEL)a1 upLiftSelector:(SEL)a2;

- (void).cxx_destruct;
- (void)buttonPressed:(id)a0;

@end
