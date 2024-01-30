@class NSData, NSObject;
@protocol OS_xpc_object, DVTInputStream;

@interface DTKTraceTapMemo : DTTapDataMemo

@property (nonatomic) BOOL isSession;
@property (nonatomic) unsigned int triggerCount;
@property (retain, nonatomic) NSData *triggerIDs;
@property (retain, nonatomic) id<DVTInputStream> datastream;
@property (retain, nonatomic) NSObject<OS_xpc_object> *stackshot;
@property (nonatomic) BOOL isRawKtraceFile;

- (void).cxx_destruct;

@end
