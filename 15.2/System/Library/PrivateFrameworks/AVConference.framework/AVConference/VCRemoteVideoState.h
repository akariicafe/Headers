@class VideoAttributes, NSString;

@interface VCRemoteVideoState : NSObject

@property BOOL hasReceivedFirstFrame;
@property BOOL isVideoPaused;
@property BOOL isMediaStalled;
@property BOOL isVideoDegraded;
@property BOOL isVideoSuspended;
@property (retain) VideoAttributes *remoteScreenAttributes;
@property (retain) VideoAttributes *remoteVideoAttributes;
@property (copy, nonatomic) NSString *localInterfaceType;
@property (copy, nonatomic) NSString *remoteInterfaceType;

- (id)description;
- (void)dealloc;

@end
