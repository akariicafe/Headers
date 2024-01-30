@class UIColor;
@protocol HFDynamicFormattingValue, HFIconDescriptor;

@interface HUQuickControlViewProfile : NSObject <NSCopying>

@property (readonly, nonatomic) double gestureDragCoefficient;
@property (nonatomic) unsigned long long controlSize;
@property (readonly, nonatomic) BOOL supportsTouchContinuation;
@property (nonatomic) unsigned long long suspendedState;
@property (retain, nonatomic) id<HFDynamicFormattingValue> supplementaryFormattedValue;
@property (retain, nonatomic) id<HFIconDescriptor> decorationIconDescriptor;
@property (nonatomic) unsigned long long orientation;
@property (retain, nonatomic) UIColor *tintColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
