@class NSDate;

@interface PHImportTimer : NSObject

@property (retain) id uuid;
@property (retain) NSDate *startTime;
@property (retain) NSDate *endTime;
@property unsigned char type;
@property unsigned char subtype;
@property unsigned long long signpostId;

- (id)initWithType:(unsigned char)a0 subtype:(unsigned char)a1;
- (id)description;
- (void)start;
- (void).cxx_destruct;
- (double)duration;
- (void)stop;

@end
