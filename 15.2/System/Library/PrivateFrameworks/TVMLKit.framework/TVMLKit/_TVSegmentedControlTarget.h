@class NSArray;

@interface _TVSegmentedControlTarget : NSObject {
    NSArray *_elements;
}

+ (void)addTargetInSegmentedControl:(id)a0 withHighlightViewElements:(id)a1;

- (void)_valueChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewElements:(id)a0;

@end
