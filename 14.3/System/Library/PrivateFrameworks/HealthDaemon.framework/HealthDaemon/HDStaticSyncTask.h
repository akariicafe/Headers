@class NSUUID, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDStaticSyncTask : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSUUID *storeIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)runWithCompletion:(id /* block */)a0;
- (id)initWithProfile:(id)a0 options:(unsigned long long)a1 storeIdentifier:(id)a2;

@end
