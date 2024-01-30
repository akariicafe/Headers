@class NSString, NSDate;

@interface TransparencyTranscriptEvent : NSObject

@property (retain) NSDate *timestamp;
@property (retain) NSString *name;
@property BOOL success;

- (id)serialize;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
