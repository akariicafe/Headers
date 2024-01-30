@class _TVWindowSizeAdaptor, IKViewElement;
@protocol UITraitEnvironment, TVMediaQueryEvaluatorDelegate;

@interface TVMediaQueryEvaluator : NSObject {
    struct { unsigned char respondsToEvaluate : 1; } _implFlags;
}

@property (retain, nonatomic) IKViewElement *templateElement;
@property (readonly, weak, nonatomic) id<UITraitEnvironment> traitEnvironment;
@property (readonly, retain, nonatomic) _TVWindowSizeAdaptor *windowSizeAdaptor;
@property (weak, nonatomic) id<TVMediaQueryEvaluatorDelegate> delegate;

+ (id)_productType;
+ (id)_mobileGestaltStringForKey:(struct __CFString { } *)a0;
+ (id)evaluatorForTemplateElement:(id)a0 inWindow:(id)a1;
+ (id)evaluatorForTemplateElement:(id)a0 inWindow:(id)a1 traitEnvironment:(id)a2;

- (void).cxx_destruct;
- (BOOL)evaluateMediaQuery:(id)a0;
- (id)initWithTemplateElement:(id)a0;
- (BOOL)_evaluateAllMediaFeatureType:(id)a0 withValue:(id)a1;
- (BOOL)_evaluateDeviceFeatureType:(id)a0 withValue:(id)a1;
- (BOOL)_evaluateTemplateFeatureType:(id)a0 withValue:(id)a1;
- (id)initWithTemplateElement:(id)a0 inWindow:(id)a1;
- (id)initWithTemplateElement:(id)a0 inWindow:(id)a1 traitEnvironment:(id)a2;

@end
