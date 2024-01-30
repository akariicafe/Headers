@class MTLMessageFilter;

@interface _MTLMessageNotifier : NSObject

@property (readonly, retain) MTLMessageFilter *filter;
@property (readonly) id /* block */ handler;

- (id)init:(id /* block */)a0 filter:(id)a1;
- (void)dealloc;

@end
