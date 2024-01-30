@class NSMutableDictionary;

@interface PBSlideState : NSObject {
    NSMutableDictionary *mBuildOrderMap;
    unsigned int mCurrentGroupId;
}

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)addBuild:(id)a0 order:(unsigned int)a1;
- (unsigned int)generateGroupId;
- (id)buildOrderMap;

@end
