@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject

@property (retain, nonatomic) FTCServiceMonitor *monitor;
@property (readonly, retain, nonatomic) NSMutableSet *listeners;

- (id)initWithServiceType:(long long)a0;
- (BOOL)removeListenerID:(id)a0;
- (BOOL)addListenerID:(id)a0;
- (void)dealloc;
- (BOOL)hasListenerID:(id)a0;

@end
