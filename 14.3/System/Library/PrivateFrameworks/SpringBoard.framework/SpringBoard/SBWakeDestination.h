@class NSString, SBSRemoteAlertDefinition;

@interface SBWakeDestination : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SBSRemoteAlertDefinition *remoteAlertDefinition;

- (void).cxx_destruct;

@end
