@interface AVDisplayCriteriaInternal : NSObject {
    int videoDynamicRange;
    float refreshRate;
}

- (id)initWithRefreshRate:(float)a0 videoDynamicRange:(int)a1;

@end
