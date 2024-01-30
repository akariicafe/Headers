@class AVMediaDataStorageInternal;

@interface AVMediaDataStorage : NSObject {
    AVMediaDataStorageInternal *_mediaDataStorageInternal;
}

- (id)URL;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 options:(id)a1;

@end
