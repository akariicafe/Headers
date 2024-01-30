@class NSString, NPSManager;

@interface HKRPUserDefaultsSyncProvider : NSObject <HKRPUserDefaultsSyncProviding> {
    NPSManager *_manager;
}

@property (readonly, copy, nonatomic) NSString *userDefaultsDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)synchronizeKeys:(id)a0;
- (id)initWithUserDefaultsDomain:(id)a0;

@end
