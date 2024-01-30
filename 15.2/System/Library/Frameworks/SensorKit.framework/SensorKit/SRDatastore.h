@class SRDefaults, SRFrameStore;

@interface SRDatastore : NSObject {
    unsigned long long _permission;
    unsigned long long _maxAllowedPages;
    float _segmentResizeFactor;
    SRDefaults *_defaults;
    SRFrameStore *_framesStore;
    SRFrameStore *_metadata;
    SRFrameStore *_configuration;
}

+ (void)initialize;

- (void)dealloc;

@end
