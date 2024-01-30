@class HDDataCollectorState;
@protocol HDDataCollector;

@interface HDDataCollectorRecord : NSObject

@property (weak, nonatomic) id<HDDataCollector> collector;
@property (retain, nonatomic) HDDataCollectorState *state;

- (void).cxx_destruct;
- (id)description;

@end
