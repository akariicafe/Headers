@class NSMutableDictionary;

@interface PBSlideState : NSObject {
    NSMutableDictionary *mBuildOrderMap;
    unsigned int mCurrentGroupId;
}

- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (id)buildOrderMap;
- (void)addBuild:(id)a0 order:(unsigned int)a1;
- (unsigned int)generateGroupId;

@end
