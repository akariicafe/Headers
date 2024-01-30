@class NSObject, CBALSEvent;
@protocol OS_os_log;

@interface CBALSNodeiOS : NSObject {
    NSObject<OS_os_log> *_logHandle;
    int _placement;
    float _superFastIntegrationTime;
    float _fastIntegrationTime;
    float _slowIntegrationTime;
    BOOL _colorSupport;
}

@property struct __IOHIDServiceClient { } *alsService;
@property (retain, nonatomic) CBALSEvent *currentALSEvent;
@property int orientation;

- (BOOL)handleALSEvent:(id)a0;
- (void)dealloc;
- (void)initALSProperties;
- (BOOL)isColorSupported;
- (id)initWithALSServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)conformsToHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;

@end
