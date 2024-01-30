@class BWNodeInput, NSString, BWVideoFormat, BWFormat;

@interface BWNodeInputMediaProperties : NSObject {
    NSString *_associatedAttachedMediaKey;
    BWNodeInput *_owningNodeInput;
    BWFormat *_resolvedFormat;
}

@property (retain, nonatomic) BWFormat *resolvedFormat;
@property (readonly, nonatomic) BWVideoFormat *resolvedVideoFormat;
@property (readonly, nonatomic) BWFormat *liveFormat;
@property (readonly, nonatomic) BWVideoFormat *liveVideoFormat;

- (void)setLiveFormat:(id)a0;
- (void)dealloc;
- (void)_setOwningNodeInput:(id)a0 associatedAttachedMediaKey:(id)a1;

@end
