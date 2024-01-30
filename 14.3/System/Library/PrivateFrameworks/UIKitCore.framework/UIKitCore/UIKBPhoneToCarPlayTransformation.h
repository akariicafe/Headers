@class NSString;

@interface UIKBPhoneToCarPlayTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cachedKeys;
+ (id)transformationIdentifier;
+ (id)transformKeyplane:(id)a0 withTransformationContext:(id)a1;
+ (void)removeAddedKeysFromKeyplane:(id)a0;
+ (id)fillFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withEmptyKeyNamed:(id)a1 inKeyplane:(id)a2 withTransformationContext:(id)a3;
+ (unsigned long long)columnBySwappingForLeftHandDriveIfNeeded:(unsigned long long)a0;
+ (id)transform10KeyKeyplane:(id)a0 withTransformationContext:(id)a1;
+ (id)transformQWERTYKeyplane:(id)a0 withTransformationContext:(id)a1;
+ (id)cachedKeysForTransformationContext:(id)a0;


@end
