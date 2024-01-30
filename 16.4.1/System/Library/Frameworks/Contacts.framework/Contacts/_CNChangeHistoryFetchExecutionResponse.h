@class NSArray, NSData;

@interface _CNChangeHistoryFetchExecutionResponse : NSObject

@property (readonly, copy) NSArray *events;
@property (readonly) long long count;
@property (readonly, copy) NSData *token;

- (id)initWithEvents:(id)a0 count:(long long)a1 token:(id)a2;
- (void).cxx_destruct;

@end
