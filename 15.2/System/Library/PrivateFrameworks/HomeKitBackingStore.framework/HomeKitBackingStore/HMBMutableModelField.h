@class HMFVersion;

@interface HMBMutableModelField : HMBModelField

@property (nonatomic, getter=isOptional) BOOL optional;
@property (nonatomic) unsigned long long loggingVisibility;
@property (retain, nonatomic) id defaultValue;
@property (copy, nonatomic) HMFVersion *readonlyVersion;
@property (copy, nonatomic) HMFVersion *unavailableVersion;

@end
