@class NSArray, TTRNLTextStructuredEventRecurrentEvent;

@interface TTRNLTextStructuredEvent : NSObject

@property (nonatomic) void *structuredEvent;
@property (readonly, nonatomic) TTRNLTextStructuredEventRecurrentEvent *recurrentEvent;
@property (readonly, nonatomic) NSArray *locations;

- (void)dealloc;
- (id)initWithStructuredEvent:(void *)a0;

@end
