@interface CKAVMediaObject : CKMediaObject {
    BOOL _durationLoaded;
}

@property (nonatomic) double duration;

+ (id)durationCache;

- (id)description;

@end
