@class GCPhysicalInputProfile, NSString, NSMutableDictionary, _GCHandSkeleton, GCController;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface _GCXRComponent : NSObject <GCXRComponent> {
    GCController *_controller;
    GCPhysicalInputProfile *_physicalInput;
    _GCHandSkeleton *_leftHandSkeleton;
    _GCHandSkeleton *_rightHandSkeleton;
}

@property (retain) id<NSObject, NSCopying, NSSecureCoding> identifier;
@property (retain, nonatomic) NSMutableDictionary *handSkeletons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithPhysicalInputProfile:(id)a0;

@end
