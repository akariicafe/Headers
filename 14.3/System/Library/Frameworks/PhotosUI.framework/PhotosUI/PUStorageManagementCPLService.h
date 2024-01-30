@class NSString, PXCPLUIStatusProvider;

@interface PUStorageManagementCPLService : NSObject <PXChangeObserver> {
    PXCPLUIStatusProvider *_cplUIStatusProvider;
}

@property (readonly, nonatomic) BOOL hasCompletedInitialUpload;
@property (copy, nonatomic) id /* block */ uploadCallbackHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCPLService;

@end
