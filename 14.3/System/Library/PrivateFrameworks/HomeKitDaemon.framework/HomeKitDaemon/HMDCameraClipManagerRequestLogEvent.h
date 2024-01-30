@class NSUUID, NSString;

@interface HMDCameraClipManagerRequestLogEvent : HMDLogEvent

@property (class, readonly, copy) NSUUID *uuid;

@property (readonly, nonatomic) NSString *requestName;

- (void).cxx_destruct;
- (id)initWithRequestName:(id)a0;

@end
