@class NSURL, NSString, NSObject;
@protocol OS_os_log;

@interface MFFile : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL isPurgeable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
