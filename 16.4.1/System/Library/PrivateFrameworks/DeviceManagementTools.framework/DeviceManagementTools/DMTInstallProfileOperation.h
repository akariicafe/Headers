@class NSData, NSObject;
@protocol OS_dispatch_queue, DMTProfileInstallationPrimitives;

@interface DMTInstallProfileOperation : CATOperation

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *profileInstallationQueue;
@property (readonly, nonatomic) id<DMTProfileInstallationPrimitives> primitives;
@property (readonly, copy, nonatomic) NSData *profileData;

- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)initWithProfileInstallationPrimitives:(id)a0 profileData:(id)a1;
- (void)installProfile;

@end
