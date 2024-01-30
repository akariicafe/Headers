@class NSUUID, NSString, NSDictionary, NSDate;

@interface MPCPlaybackEngineEvent : NSObject

@property (readonly, nonatomic) struct { unsigned long long flags; unsigned long long machAbsoluteTime; unsigned long long rawNanoSeconds; unsigned long long timebase; double userSecondsSinceReferenceDate; } monotonicTime;
@property (readonly, nonatomic) unsigned long long machAbsoluteTime;
@property (readonly, nonatomic) unsigned long long monotonicTimeNanoSeconds;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSDate *monotonicDate;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (double)durationSinceEvent:(id)a0;
- (id)initWithType:(id)a0 payload:(id)a1 monotonicTime:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; double x4; })a2 identifier:(id)a3;

@end
