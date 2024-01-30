@class NSMutableSet;

@interface _CESRHomeKitNames : NSObject

@property (readonly, nonatomic) NSMutableSet *homeNames;
@property (readonly, nonatomic) NSMutableSet *roomNames;
@property (readonly, nonatomic) NSMutableSet *zoneNames;
@property (readonly, nonatomic) NSMutableSet *deviceNames;
@property (readonly, nonatomic) NSMutableSet *groupNames;
@property (readonly, nonatomic) NSMutableSet *sceneNames;

- (void).cxx_destruct;
- (id)init;

@end
