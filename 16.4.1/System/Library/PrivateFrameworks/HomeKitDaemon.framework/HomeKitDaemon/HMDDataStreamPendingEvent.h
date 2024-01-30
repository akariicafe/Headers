@class NSString, NSDictionary;

@interface HMDDataStreamPendingEvent : NSObject

@property (readonly, nonatomic) NSString *topic;
@property (readonly, nonatomic) NSString *protocol;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0 topic:(id)a1 payload:(id)a2 completion:(id /* block */)a3;

@end
