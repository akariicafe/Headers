@class NSString;

@interface UIKBFloatingKeyplaneTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transformationIdentifier;
+ (id)transformKeyplane:(id)a0 withTransformationContext:(id)a1;


@end
