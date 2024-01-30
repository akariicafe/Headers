@class EKDayOccurrenceState;

@interface EKDayOccurrenceContentImageRequest : NSObject

@property (readonly, nonatomic) long long requestId;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) EKDayOccurrenceState *state;
@property (readonly, nonatomic) id /* block */ resultHandler;

- (id)initWithId:(long long)a0 options:(unsigned long long)a1 state:(id)a2 resultHandler:(id /* block */)a3;
- (void).cxx_destruct;

@end
