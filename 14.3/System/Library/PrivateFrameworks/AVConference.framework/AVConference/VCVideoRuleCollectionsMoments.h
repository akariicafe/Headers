@interface VCVideoRuleCollectionsMoments : NSObject {
    BOOL _isHEIFAndHEVCFormatEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (int)getMomentsCapabilities;
- (id)getMomentsVideoCodecs;
- (id)getMomentsImageTypes;

@end
