@class NSUUID, NSString, _HMContext, HMHome;

@interface _HMAutomationBuilder : NSObject <HMAutomationBuilderInternal> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _HMContext *_context;
}

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)adoptExternalCategoriesFromClasses:(Class)a0;

@end
