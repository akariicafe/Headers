@interface VCVideoRuleCollectionsCamera : VCVideoRuleCollections {
    BOOL _encodeHighDef;
    BOOL _decodeHighDef;
}

+ (id)sharedInstance;

- (double)preferredAspectRatio;
- (BOOL)useSoftFramerateSwitching;
- (BOOL)getBestFrameWidth:(int *)a0 frameHeight:(int *)a1 frameRate:(float *)a2;
- (BOOL)setupH264CellularRules;
- (void)resetEncodingRulesForCameraIsHD:(BOOL)a0 isWVGA:(BOOL)a1 is1080:(BOOL)a2;
- (id)bestVideoRuleForEncodingType:(unsigned char)a0 aspectRatio:(double)a1 payload:(int)a2;
- (id)bestVideoRuleForEncodingType:(unsigned char)a0 aspectRatio:(double)a1;
- (BOOL)isHiDefCapable;
- (struct _VCBitrateConfiguration { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; } *)bitrateConfiguration;

@end
