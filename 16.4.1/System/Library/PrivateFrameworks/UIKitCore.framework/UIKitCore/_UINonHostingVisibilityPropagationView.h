@class NSString;

@interface _UINonHostingVisibilityPropagationView : _UIVisibilityPropagationView

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *environmentIdentifier;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pid:(int)a1 environmentIdentifier:(id)a2;

@end
