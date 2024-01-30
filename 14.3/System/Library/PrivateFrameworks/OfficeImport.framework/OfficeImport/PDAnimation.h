@class OITSUNoCopyDictionary, TCEnumerationMap, PDRootTimeNode;

@interface PDAnimation : NSObject {
    PDRootTimeNode *mRootTimeNode;
    OITSUNoCopyDictionary *mBuildMap;
}

@property (class, readonly) TCEnumerationMap *entranceSubTypeMap;
@property (class, readonly) TCEnumerationMap *exitSubTypeMap;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)addRootTimeNode;
- (id)rootTimeNode;
- (void)setBuildMap:(id)a0;
- (id)buildMap;

@end
