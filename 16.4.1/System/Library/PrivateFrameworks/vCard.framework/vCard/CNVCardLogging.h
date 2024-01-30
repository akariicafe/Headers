@class NSObject;
@protocol OS_os_log;

@interface CNVCardLogging : NSObject

@property (class, readonly) NSObject<OS_os_log> *vCard;
@property (class, readonly) NSObject<OS_os_log> *meCard;

@end
