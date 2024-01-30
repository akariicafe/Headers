@interface VCVideoRuleCollectionsMoments : NSObject {
    BOOL _isHEIFAndHEVCFormatEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (unsigned char)getMomentsCapabilities;
- (id)getMomentsVideoCodecs;
- (id)getMomentsImageTypes;

@end
