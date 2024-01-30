@class NSArray, NSData;

@interface _CNChangeHistoryFetchExecutionResponse : NSObject

@property (readonly, copy) NSArray *events;
@property (readonly, copy) NSData *token;

- (void).cxx_destruct;
- (id)initWithEvents:(id)a0 token:(id)a1;

@end
