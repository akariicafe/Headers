@class NSString;

@interface PHASESessionVolumeImpl : NSObject <PHASESessionVolumeInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)registerVolumeChangedNotificationBlock:(id /* block */)a0;
- (id)volumeForCommand:(id)a0;
- (id)volumeForCommandFromCallback:(id)a0;

@end
