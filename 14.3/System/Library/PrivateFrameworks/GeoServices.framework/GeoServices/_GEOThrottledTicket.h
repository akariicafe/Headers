@protocol GEOMapServiceThrottlableTicket;

@interface _GEOThrottledTicket : NSObject

@property (retain, nonatomic) id<GEOMapServiceThrottlableTicket> ticket;
@property (copy, nonatomic) id /* block */ submissionHandler;
@property (nonatomic) unsigned int qos;
@property (nonatomic) double safeTime;

+ (id)ticket:(id)a0 withHandler:(id /* block */)a1;

- (void).cxx_destruct;

@end
