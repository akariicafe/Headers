@class NSString;

@interface CNGeminiInteraction : NSObject

@property (readonly, nonatomic) long long transport;
@property (readonly, nonatomic) long long directionality;
@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;

- (void).cxx_destruct;
- (id)initWithTransport:(long long)a0 directionality:(long long)a1 destinationHandle:(id)a2;
- (id)initWithTransport:(long long)a0 directionality:(long long)a1 destinationHandle:(id)a2 destinationContactIdentifier:(id)a3;

@end
