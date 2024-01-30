@class NSString;

@interface SRDefaults : NSObject {
    unsigned long long _datastoreVersion;
    unsigned long long _segmentSize;
    unsigned long long _metadataSize;
    unsigned long long _maxAllowedMappedPages;
    float _segmentResizeFactor;
    float _segmentPaddingFactor;
    NSString *_className;
    NSString *_exportingClassName;
}

- (void)dealloc;

@end
