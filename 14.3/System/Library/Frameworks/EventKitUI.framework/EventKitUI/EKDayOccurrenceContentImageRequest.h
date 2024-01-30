@class EKDayOccurrenceState;

@interface EKDayOccurrenceContentImageRequest : NSObject

@property (readonly, nonatomic) long long requestId;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) EKDayOccurrenceState *state;
@property (readonly, nonatomic) id /* block */ resultHandler;

- (void).cxx_destruct;
- (id)initWithId:(long long)a0 options:(unsigned long long)a1 state:(id)a2 resultHandler:(id /* block */)a3;

@end
