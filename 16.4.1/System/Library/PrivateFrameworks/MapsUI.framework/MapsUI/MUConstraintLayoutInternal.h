@class NSArray, UIView;

@interface MUConstraintLayoutInternal : NSObject {
    void /* unknown type, empty encoding */ layoutBuilder;
}

@property (nonatomic, readonly) NSArray *layoutConstraints;
@property (nonatomic, readonly) NSArray *layoutGuides;
@property (nonatomic) long long mode;
@property (nonatomic, weak) UIView *viewForForwardingSetNeedsUpdateConstraints;

- (void)deactivate;
- (id)init;
- (void)activate;
- (void)prepare;
- (void).cxx_destruct;

@end
