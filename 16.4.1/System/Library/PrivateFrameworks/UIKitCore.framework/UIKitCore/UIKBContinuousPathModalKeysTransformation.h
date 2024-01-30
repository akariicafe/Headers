@class NSString;

@interface UIKBContinuousPathModalKeysTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_donorControlKeysForLastDisplayRowForKeyplane:(id)a0 transformationContext:(id)a1;
+ (id)_donorKeyplaneForKeyplane:(id)a0 transformationContext:(id)a1;
+ (id)rollbackKeyplane:(id)a0 withTransformationContext:(id)a1;
+ (id)transformKeyplane:(id)a0 withTransformationContext:(id)a1;
+ (id)transformationIdentifier;


@end
