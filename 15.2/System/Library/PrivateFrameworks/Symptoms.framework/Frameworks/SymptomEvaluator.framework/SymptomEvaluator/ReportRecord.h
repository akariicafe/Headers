@class NSString;

@interface ReportRecord : NSObject

@property (nonatomic) long long count;
@property (nonatomic) double lastSeen;
@property (retain, nonatomic) NSString *keyString;

- (void).cxx_destruct;

@end
