@class NSString;

@interface CBDeviceSettings : NSObject <CUXPCCodable>

@property (nonatomic) char aclPriority;
@property (nonatomic) char allowsAutoRoute;
@property (nonatomic) char audioRouteHidden;
@property (nonatomic) unsigned long long deviceFlagsMask;
@property (nonatomic) unsigned long long deviceFlagsValue;
@property (nonatomic) char doubleTapActionLeft;
@property (nonatomic) char doubleTapActionRight;
@property (nonatomic) char microphoneMode;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) char placementMode;
@property (nonatomic) char relinquishAudioRoute;
@property (nonatomic) char smartRoutingMode;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;

@end
