@class ADTimeSyncNode;

@interface ADTimeSyncPushResults : NSObject

@property (retain) ADTimeSyncNode *primaryStreamMatch;
@property (retain) ADTimeSyncNode *secondaryStreamMatch;

- (void).cxx_destruct;

@end
