@class PAAccessInterval, VCScreenShare, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCScreenCaptureManager : NSObject {
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSMutableArray *_screenCaptureClients;
    VCScreenShare *_currentActiveScreenShare;
    PAAccessInterval *_accessInterval;
}

+ (id)sharedManager;

- (void)startPrivacyAccountingInternval;
- (void)screenCaptureStopFor:(id)a0 didSucceed:(BOOL)a1 withError:(id)a2;
- (void)endPrivacyAccountingInterval;
- (id)screenShareDictionary:(id)a0;
- (id)init;
- (void)screenCaptureStartFor:(id)a0 didSucceed:(BOOL)a1 withError:(id)a2;
- (id)getErrorDictionaryFromError:(id)a0;
- (void)registerBlocksForService;
- (void)dealloc;

@end
