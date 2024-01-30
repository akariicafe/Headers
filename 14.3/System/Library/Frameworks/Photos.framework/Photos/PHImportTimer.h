@class NSDate;

@interface PHImportTimer : NSObject

@property (retain) id uuid;
@property (retain) NSDate *startTime;
@property (retain) NSDate *endTime;
@property unsigned char type;
@property unsigned char subtype;
@property unsigned long long signpostId;

- (void).cxx_destruct;
- (void)stop;
- (id)description;
- (double)duration;
- (id)initWithType:(unsigned char)a0 subtype:(unsigned char)a1;
- (void)start;

@end
