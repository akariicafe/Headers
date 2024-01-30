@protocol TLIdentifiable;

@interface TLTimelineOperation : TLOperation

@property (readonly, nonatomic) id<TLIdentifiable> identifiable;
@property (copy) id /* block */ operationCompletionBlock;
@property (copy) id /* block */ timelineOperationCompletionBlock;

- (void).cxx_destruct;
- (id)initWithIdentifiable:(id)a0;

@end
