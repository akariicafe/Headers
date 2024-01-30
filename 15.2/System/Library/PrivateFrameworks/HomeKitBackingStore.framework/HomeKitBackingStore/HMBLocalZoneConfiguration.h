@class HMBModelContainer;
@protocol HMBLocalZoneDelegate;

@interface HMBLocalZoneConfiguration : HMFObject <NSCopying>

@property (nonatomic) BOOL readOnly;
@property (nonatomic) BOOL createIfNeeded;
@property (retain, nonatomic) HMBModelContainer *modelContainer;
@property (weak, nonatomic) id<HMBLocalZoneDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
