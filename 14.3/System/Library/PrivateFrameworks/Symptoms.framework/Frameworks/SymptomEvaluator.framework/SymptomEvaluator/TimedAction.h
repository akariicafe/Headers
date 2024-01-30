@class NSUUID, NSString, NSDate, NSObject;
@protocol OS_dispatch_source;

@interface TimedAction : NSObject {
    NSObject<OS_dispatch_source> *_timer;
}

@property (readonly, nonatomic) NSUUID *connectionId;
@property (readonly, nonatomic) int interfaceIndex;
@property (readonly, nonatomic) NSString *owner;
@property (readonly, nonatomic) NSDate *entryTime;
@property (nonatomic) unsigned long long target;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithConnId:(id)a0 interfaceIndex:(int)a1 owner:(id)a2 target:(unsigned long long)a3;

@end
