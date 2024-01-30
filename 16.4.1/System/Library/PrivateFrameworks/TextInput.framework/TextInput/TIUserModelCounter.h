@class NSString, NSNumber, NSDate;

@interface TIUserModelCounter : NSObject {
    unsigned long long _persisted;
    unsigned long long _current;
    BOOL _wasReset;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *count;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastUpdateDate;

- (void)add:(int)a0;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)doPersist:(id)a0 forDate:(id)a1;
- (id)initWithName:(id)a0 initialCount:(id)a1 creationDate:(id)a2 lastUpdateDate:(id)a3;

@end
