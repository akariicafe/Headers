@class NSString, NSURL, NSMutableArray;

@interface LPEvent : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long status;
@property (retain, nonatomic) NSURL *URL;
@property (nonatomic) unsigned long long specialization;
@property (readonly, weak, nonatomic) LPEvent *parent;
@property (readonly, nonatomic) NSMutableArray *children;

- (BOOL)isComplete;
- (void).cxx_destruct;
- (id)init;
- (id)childWithType:(long long)a0 subtitle:(id)a1;
- (void)didCompleteWithErrorCode:(long long)a0;
- (void)didCompleteWithStatus:(long long)a0;
- (id)initWithType:(long long)a0 subtitle:(id)a1;
- (BOOL)_childrenAreComplete;

@end
