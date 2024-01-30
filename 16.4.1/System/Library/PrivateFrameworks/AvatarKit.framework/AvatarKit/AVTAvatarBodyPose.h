@class NSDictionary;

@interface AVTAvatarBodyPose : NSObject {
    NSDictionary *_dictionaryRepresentation;
}

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)neutralPose;
+ (id)posesInPosePack:(id)a0;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void).cxx_destruct;
- (void)enumerateJointsForVariant:(id)a0 intensity:(float)a1 usingBlock:(id /* block */)a2;
- (id)initWithHierarchy:(id)a0;
- (id)initWithRootJoints:(id)a0;
- (id)initWithSceneAtURL:(id)a0;

@end
