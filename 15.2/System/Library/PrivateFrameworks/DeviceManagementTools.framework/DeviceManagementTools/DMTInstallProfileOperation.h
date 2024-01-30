@class NSData, NSObject;
@protocol OS_dispatch_queue, DMTProfileInstallationPrimitives;

@interface DMTInstallProfileOperation : CATOperation

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *profileInstallationQueue;
@property (readonly, nonatomic) id<DMTProfileInstallationPrimitives> primitives;
@property (readonly, copy, nonatomic) NSData *profileData;

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (void)installProfile;
- (id)initWithProfileInstallationPrimitives:(id)a0 profileData:(id)a1;

@end
