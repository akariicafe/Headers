@class BBBulletin;

@interface BBSyncDelayedDismissal : NSObject

@property (retain, nonatomic) BBBulletin *bulletin;
@property (nonatomic) unsigned long long feeds;

- (void).cxx_destruct;

@end
