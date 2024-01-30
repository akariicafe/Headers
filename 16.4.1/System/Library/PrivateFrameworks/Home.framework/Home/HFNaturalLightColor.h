@class NSString, NAIdentity;

@interface HFNaturalLightColor : NSObject <HFColorLikeObject, NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
