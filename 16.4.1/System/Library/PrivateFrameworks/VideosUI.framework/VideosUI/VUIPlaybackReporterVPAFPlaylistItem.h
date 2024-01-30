@class NSArray, NSString;

@interface VUIPlaybackReporterVPAFPlaylistItem : NSObject <JEMediaPlaylistItem>

@property (nonatomic) unsigned long long startOverallPosition;
@property (retain, nonatomic) NSArray *eventData;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } timeRange;
@property (nonatomic) unsigned long long duration;
@property (readonly, nonatomic) unsigned long long startPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPosition:(unsigned long long)a0 duration:(unsigned long long)a1 eventData:(id)a2;

@end
