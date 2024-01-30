@class NSString, NSDictionary;

@interface HMMStateData : NSObject

@property (nonatomic) unsigned long long enterTime;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isOpen) BOOL open;
@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) BOOL cleanClose;
@property (readonly, nonatomic) NSDictionary *enterData;
@property (readonly, nonatomic) NSDictionary *exitData;

- (id)description;
- (void).cxx_destruct;
- (void)_exitTime:(unsigned long long)a0 exitData:(id)a1;
- (void)exitTime:(unsigned long long)a0 exitData:(id)a1;
- (void)forceExit:(unsigned long long)a0;
- (id)initWithName:(id)a0 enterTime:(unsigned long long)a1 enterData:(id)a2;

@end
