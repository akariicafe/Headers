@class NSString, MPAVItem;

@interface MPCAVItemTrace : NSObject

@property (retain, nonatomic) NSString *name;
@property (weak, nonatomic) MPAVItem *item;
@property (nonatomic) unsigned int endEvent;
@property (nonatomic) double started;
@property (nonatomic) double ended;

+ (void)traceWithName:(id)a0 item:(id)a1 event:(unsigned int)a2;
+ (id)traceIntervalWithName:(id)a0 item:(id)a1 beginEvent:(unsigned int)a2 endEvent:(unsigned int)a3;

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)endInterval;

@end
