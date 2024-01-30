@class NSUUID, NSMutableArray, NSDate;

@interface PCSMTT : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *startTime;
@property (retain) NSMutableArray *completedPoints;
@property (readonly) NSUUID *parentUUID;
@property (readonly) NSUUID *UUID;
@property (readonly) double time;

- (id)jsonDict;
- (id)init;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)start;
- (void)encodeWithCoder:(id)a0;
- (id)measurePoint:(id)a0;
- (void)completePoint:(id)a0;
- (id)initWithMTT:(id)a0;
- (void)measure:(id)a0 block:(id /* block */)a1;
- (void)measure:(id)a0 success:(BOOL)a1 time:(double)a2;

@end
