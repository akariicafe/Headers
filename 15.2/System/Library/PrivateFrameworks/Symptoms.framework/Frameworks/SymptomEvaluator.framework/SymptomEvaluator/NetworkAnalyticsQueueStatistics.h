@class NSString, NSMutableArray;

@interface NetworkAnalyticsQueueStatistics : NSObject {
    double _lastUpdateTime;
    int _ioctlSocket;
}

@property (retain, nonatomic) NSMutableArray *slots;
@property (readonly) NSString *interfaceName;

+ (id)slotToString:(unsigned char)a0;
+ (id)schedulerToString:(unsigned int)a0;

- (id)initWithInterfaceName:(id)a0;
- (id)description;
- (void)update;
- (void).cxx_destruct;
- (void)dealloc;
- (void)createIoctlSocket;
- (void)cleanupIoctlSocket;
- (id)_entryForSlot:(unsigned char)a0;
- (void)_processNewStats:(struct if_ifclassq_stats { unsigned int x0; unsigned int x1; struct pktcntr { unsigned long long x0; unsigned long long x1; } x2; struct pktcntr { unsigned long long x0; unsigned long long x1; } x3; unsigned int x4; struct fq_codel_classstats { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; struct fq_codel_flowstats { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x26[20]; unsigned int x27; unsigned int x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; } x5; } *)a0 forSlot:(unsigned char)a1;
- (void)_updateForSlot:(unsigned char)a0;

@end
