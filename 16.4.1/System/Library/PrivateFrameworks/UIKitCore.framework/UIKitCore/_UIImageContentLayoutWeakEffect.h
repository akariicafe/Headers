@class NSString, UITraitCollection;
@protocol _UIImageContentEffect;

@interface _UIImageContentLayoutWeakEffect : NSObject <_UIImageContentEffect> {
    id<_UIImageContentEffect> _weakEffect;
}

@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
