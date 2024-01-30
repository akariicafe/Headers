@class NSNumber;

@interface _HKSPFeatures : NSObject

@property (class, copy, nonatomic) NSNumber *focusModeEnabledOverride;

+ (BOOL)cloudKitSyncEnabled;
+ (BOOL)focusModeEnabled;

@end
