@class NSString, FBSDisplayIdentity, BSMachPortSendRight;

@interface SBSSystemNotesTakeScreenshotResult : NSObject <BSXPCCoding>

@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic) BSMachPortSendRight *machPortSendRight;
@property (readonly, nonatomic) double scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
