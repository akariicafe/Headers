@class NSString;

@interface CalLogEnvelope : NSObject

@property (retain, nonatomic) NSString *logName;
@property (nonatomic) int level;
@property (retain, nonatomic) NSString *message;
@property (nonatomic) int processID;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) unsigned int machPort;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) NSString *function;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLogName:(id)a0 level:(int)a1 message:(id)a2;

@end
