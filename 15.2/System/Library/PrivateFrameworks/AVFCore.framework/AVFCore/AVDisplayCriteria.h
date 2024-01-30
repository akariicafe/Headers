@class AVDisplayCriteriaInternal;

@interface AVDisplayCriteria : NSObject <NSCopying> {
    AVDisplayCriteriaInternal *_displayCriteria;
}

@property (readonly, nonatomic) float refreshRate;
@property (readonly) int videoDynamicRange;

- (id)initWithRefreshRate:(float)a0 videoDynamicRange:(int)a1;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
