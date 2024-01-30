@class NSUUID;

@interface FPSharedCache : NSObject {
    unsigned int _alignment;
    NSUUID *_uuid;
    unsigned long long _baseAddress;
    unsigned long long _mappedSize;
}

- (void).cxx_destruct;

@end
