@interface WFVariablePillLayoutMetrics : NSObject {
    void /* unknown type, empty encoding */ leadingPadding;
    void /* unknown type, empty encoding */ iconSize;
    void /* unknown type, empty encoding */ iconDisplaySize;
    void /* unknown type, empty encoding */ spacing;
    void /* unknown type, empty encoding */ textSize;
    void /* unknown type, empty encoding */ textFont;
    void /* unknown type, empty encoding */ trailingPadding;
    void /* unknown type, empty encoding */ cornerRadius;
}

@property (nonatomic, readonly) double totalWidth;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 icon:(id)a1 font:(id)a2 height:(double)a3;

@end
