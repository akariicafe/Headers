@class NSArray, UIView, MUConstraintLayoutInternal;

@interface MUConstraintLayout : NSObject

@property (readonly, nonatomic) MUConstraintLayoutInternal *internal;
@property (readonly, nonatomic) NSArray *layoutConstraints;
@property (readonly, nonatomic) NSArray *layoutGuides;
@property (nonatomic) long long mode;
@property (weak, nonatomic) UIView *viewForForwardingSetNeedsUpdateConstraints;

- (void)deactivate;
- (void)activate;
- (void)prepare;
- (void).cxx_destruct;
- (id)initWithInternal:(id)a0;

@end
