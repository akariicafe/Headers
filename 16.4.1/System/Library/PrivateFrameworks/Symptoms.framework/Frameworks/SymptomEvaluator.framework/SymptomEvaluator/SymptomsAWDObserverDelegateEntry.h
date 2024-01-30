@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, SymptomsAWDObserverDelegate;

@interface SymptomsAWDObserverDelegateEntry : NSObject

@property (retain, nonatomic) id<SymptomsAWDObserverDelegate> delegate;
@property (retain, nonatomic) NSMutableSet *events;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (BOOL)isEqual:(id)a0;
- (BOOL)matchesDelegate:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
