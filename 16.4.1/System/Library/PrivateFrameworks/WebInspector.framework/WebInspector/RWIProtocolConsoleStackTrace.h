@class NSArray;

@interface RWIProtocolConsoleStackTrace : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *callFrames;
@property (nonatomic) BOOL topCallFrameIsBoundary;
@property (nonatomic) BOOL truncated;
@property (retain, nonatomic) RWIProtocolConsoleStackTrace *parentStackTrace;

- (id)initWithCallFrames:(id)a0;

@end
