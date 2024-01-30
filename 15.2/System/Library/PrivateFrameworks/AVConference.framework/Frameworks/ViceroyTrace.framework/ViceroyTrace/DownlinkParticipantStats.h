@class NSMutableDictionary;

@interface DownlinkParticipantStats : NSObject

@property (readonly) NSMutableDictionary *streamGroupStats;

- (id)init;
- (void)dealloc;
- (id)statsForStreamGroup:(id)a0;

@end
