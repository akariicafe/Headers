@class NSObject;
@protocol OS_os_log;

@interface IDSTransportLog : NSObject

@property (class, readonly) NSObject<OS_os_log> *IDSService;
@property (class, readonly) NSObject<OS_os_log> *QRAllocator;
@property (class, readonly) NSObject<OS_os_log> *IDSConnection;
@property (class, readonly) NSObject<OS_os_log> *IDSDeviceConnection;
@property (class, readonly) NSObject<OS_os_log> *IDSDataChannels;
@property (class, readonly) NSObject<OS_os_log> *IDSLocalSetup;
@property (class, readonly) NSObject<OS_os_log> *IDSReportSpam;
@property (class, readonly) NSObject<OS_os_log> *NRPairing;

@end
