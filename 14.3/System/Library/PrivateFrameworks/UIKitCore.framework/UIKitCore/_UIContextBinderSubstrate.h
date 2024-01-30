@class FBSScene, NSString;

@interface _UIContextBinderSubstrate : NSObject <_UIContextBinding>

@property (readonly, nonatomic) FBSScene *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
