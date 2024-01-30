@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject

@property (retain, nonatomic) FTCServiceMonitor *monitor;
@property (readonly, retain, nonatomic) NSMutableSet *listeners;

- (BOOL)removeListenerID:(id)a0;
- (id)initWithServiceType:(long long)a0;
- (void)dealloc;
- (BOOL)hasListenerID:(id)a0;
- (BOOL)addListenerID:(id)a0;

@end
