@class NSUUID, NSNumber, NSDictionary;
@protocol CATActiveIDSServiceConnectionMessageContent;

@interface CATActiveServiceConnectionIDSMessage : NSObject <CATIDSMessage>

@property (readonly, nonatomic) NSUUID *connectionIdentifier;
@property (readonly, nonatomic) NSNumber *receivedSequenceNumber;
@property (readonly, nonatomic) id<CATActiveIDSServiceConnectionMessageContent> content;
@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithConnectionIdentifier:(id)a0 receivedSequenceNumber:(id)a1 content:(id)a2;

@end
