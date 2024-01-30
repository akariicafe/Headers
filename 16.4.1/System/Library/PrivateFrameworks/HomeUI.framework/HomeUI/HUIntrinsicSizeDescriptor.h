@class NSNumber, NAIdentity, NSString;

@interface HUIntrinsicSizeDescriptor : NSObject <NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) struct CGSize { double width; double height; } intrinsicSize;
@property (readonly, nonatomic) unsigned long long flexType;
@property (readonly, copy, nonatomic) NSNumber *aspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorWithAspectRatio:(double)a0;
+ (id)descriptorWithIntrinsicSize:(struct CGSize { double x0; double x1; })a0 flexType:(unsigned long long)a1;
+ (id)noIntrinsicSizeDescriptor;

@end
