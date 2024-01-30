@class NSArray, AVAssetWriterInputPassDescriptionInternal;

@interface AVAssetWriterInputPassDescription : NSObject {
    AVAssetWriterInputPassDescriptionInternal *_internal;
}

@property (readonly, nonatomic) NSArray *sourceTimeRanges;

- (id)initWithTimeRanges:(id)a0;
- (id)description;
- (id)init;
- (void)dealloc;

@end
