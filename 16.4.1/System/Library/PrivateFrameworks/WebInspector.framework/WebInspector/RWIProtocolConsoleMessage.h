@class NSString, NSArray, RWIProtocolConsoleStackTrace;

@interface RWIProtocolConsoleMessage : RWIProtocolJSONObject

@property (nonatomic) long long source;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) int line;
@property (nonatomic) int column;
@property (nonatomic) int repeatCount;
@property (copy, nonatomic) NSArray *parameters;
@property (retain, nonatomic) RWIProtocolConsoleStackTrace *stackTrace;
@property (copy, nonatomic) NSString *networkRequestId;
@property (nonatomic) double timestamp;

- (id)initWithSource:(long long)a0 level:(long long)a1 text:(id)a2;

@end
