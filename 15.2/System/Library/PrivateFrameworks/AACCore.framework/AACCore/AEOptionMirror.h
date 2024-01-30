@class NSDictionary;

@interface AEOptionMirror : NSObject {
    NSDictionary *_rightOptionsByLeft;
    NSDictionary *_leftOptionsByRight;
}

@property (readonly, nonatomic) long long leftClearMask;
@property (readonly, nonatomic) long long rightClearMask;

- (void).cxx_destruct;
- (id)initWithMirroredOptions:(id)a0;
- (long long)leftOptionsFromRight:(long long)a0;
- (long long)rightOptionsFromLeft:(long long)a0;

@end
