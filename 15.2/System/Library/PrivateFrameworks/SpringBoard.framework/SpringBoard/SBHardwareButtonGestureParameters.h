@class NSString;

@interface SBHardwareButtonGestureParameters : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) long long maximumPressCount;
@property (readonly, nonatomic) double longPressTimeInterval;
@property (readonly, nonatomic) double multiplePressTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
