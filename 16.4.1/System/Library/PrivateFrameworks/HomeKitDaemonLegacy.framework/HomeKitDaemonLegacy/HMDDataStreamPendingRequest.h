@class NSNumber, NSString, NSDictionary;

@interface HMDDataStreamPendingRequest : NSObject

@property (readonly, nonatomic) NSNumber *identifier;
@property (readonly, nonatomic) NSString *topic;
@property (readonly, nonatomic) NSString *protocol;
@property (readonly, nonatomic) id /* block */ callback;
@property (readonly, nonatomic) NSDictionary *payload;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 protocol:(id)a1 topic:(id)a2 payload:(id)a3 callback:(id /* block */)a4;

@end
