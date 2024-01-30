@class HDDataCollectorState;
@protocol HDDataCollector;

@interface HDDataCollectorRecord : NSObject

@property (weak, nonatomic) id<HDDataCollector> collector;
@property (retain, nonatomic) HDDataCollectorState *state;

- (id)description;
- (void).cxx_destruct;

@end
