@interface VCVideoRuleCollectionsRemoteCamera : VCVideoRuleCollections

+ (id)sharedInstance;

- (unsigned int)tilesPerFrame;
- (BOOL)setupHEVCRules;

@end
