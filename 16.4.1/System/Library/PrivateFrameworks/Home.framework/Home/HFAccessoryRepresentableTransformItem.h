@class NSString;
@protocol HFAccessoryRepresentable, HFHomeKitObject;

@interface HFAccessoryRepresentableTransformItem : HFTransformItem <HFAccessoryRepresentableItem>

@property (readonly, nonatomic) id<HFAccessoryRepresentable> accessoryRepresentableObject;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemWithAccessoryRepresentableObject:(id)a0 valueSource:(id)a1;


@end
