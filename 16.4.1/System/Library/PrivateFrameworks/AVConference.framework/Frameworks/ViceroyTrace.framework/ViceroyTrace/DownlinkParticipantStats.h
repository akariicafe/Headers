@class NSMutableDictionary;

@interface DownlinkParticipantStats : NSObject

@property (readonly) NSMutableDictionary *streamGroupStats;

- (void)dealloc;
- (id)init;
- (id)statsForStreamGroup:(id)a0;

@end
