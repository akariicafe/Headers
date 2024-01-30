@interface CAFlipBookFrame : NSObject {
    unsigned long long _presentationTime;
    unsigned long long _frameId;
    unsigned int _generation;
    id _userInfo;
}

@property (readonly, nonatomic) unsigned long long presentationTime;
@property (readonly, nonatomic) unsigned long long frameId;
@property (readonly, nonatomic) id userInfo;

- (id)description;
- (id)_initWithPresentationTime:(unsigned long long)a0 frameId:(unsigned long long)a1 generation:(unsigned int)a2 userInfo:(id)a3;
- (unsigned int)generation;
- (void)dealloc;

@end
