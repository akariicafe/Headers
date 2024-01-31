@interface CXFeatures : NSObject

@property (readonly, nonatomic) BOOL callManagementMuteControl;
@property (readonly, nonatomic, getter=isChannelEnabled) BOOL channelEnabled;

@end
