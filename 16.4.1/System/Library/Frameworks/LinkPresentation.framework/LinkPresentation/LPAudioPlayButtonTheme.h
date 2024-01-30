@class UIColor;

@interface LPAudioPlayButtonTheme : NSObject

@property (readonly, retain, nonatomic) UIColor *keyColor;
@property (readonly, retain, nonatomic) UIColor *secondaryColor;
@property (readonly, retain, nonatomic) UIColor *outerBorderColor;
@property (readonly, nonatomic) BOOL useInvertedInactiveState;

- (void).cxx_destruct;
- (id)initWithKeyColor:(id)a0 secondaryColor:(id)a1 outerBorderColor:(id)a2 useInvertedInactiveState:(BOOL)a3;

@end
