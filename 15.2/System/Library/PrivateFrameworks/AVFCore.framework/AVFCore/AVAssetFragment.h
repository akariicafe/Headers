@class AVAssetFragmentInternal;

@interface AVAssetFragment : NSObject {
    AVAssetFragmentInternal *_internal;
}

@property (readonly) long long sequenceNumber;

+ (id)fragmentWithSequenceNumber:(long long)a0;

- (id)initWithSequenceNumber:(long long)a0;
- (id)init;
- (void)dealloc;

@end
