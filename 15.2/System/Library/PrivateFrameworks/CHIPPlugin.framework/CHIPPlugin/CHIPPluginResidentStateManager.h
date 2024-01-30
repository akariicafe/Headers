@class NSString;
@protocol CHIPPluginResidentStateManagerDataSource, CHIPPluginResidentStateManagerDelegate;

@interface CHIPPluginResidentStateManager : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) id<CHIPPluginResidentStateManagerDelegate> delegate;
@property (nonatomic, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (nonatomic, getter=isResidentEnabledInAnyHome) BOOL residentEnabledInAnyHome;
@property (weak) id<CHIPPluginResidentStateManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
