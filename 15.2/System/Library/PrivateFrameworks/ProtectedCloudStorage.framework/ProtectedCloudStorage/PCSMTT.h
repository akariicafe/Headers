@class NSUUID, NSMutableArray, NSDate;

@interface PCSMTT : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *startTime;
@property (retain) NSMutableArray *completedPoints;
@property (readonly) NSUUID *parentUUID;
@property (readonly) NSUUID *UUID;
@property (readonly) double time;
@property BOOL returnedExistingIdentity;

- (void)completePoint:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)measure:(id)a0 success:(BOOL)a1 time:(double)a2;
- (id)description;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMTT:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)measurePoint:(id)a0;
- (void)measure:(id)a0 block:(id /* block */)a1;
- (void)stop;
- (id)jsonDict;

@end
