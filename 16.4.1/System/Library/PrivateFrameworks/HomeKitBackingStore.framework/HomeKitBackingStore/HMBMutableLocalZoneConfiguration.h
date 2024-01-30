@class HMBModelContainer;
@protocol HMBLocalZoneDelegate;

@interface HMBMutableLocalZoneConfiguration : HMBLocalZoneConfiguration

@property (nonatomic) BOOL readOnly;
@property (nonatomic) BOOL createIfNeeded;
@property (retain, nonatomic) HMBModelContainer *modelContainer;
@property (weak, nonatomic) id<HMBLocalZoneDelegate> delegate;

@end
