@class NSData, NSDictionary, NSDate;

@interface ICSuzeLeaseResponse : NSObject {
    NSDate *_requestDate;
    NSDictionary *_responseDictionary;
}

@property (readonly, copy, nonatomic) NSData *clientData;
@property (readonly, copy, nonatomic) NSDate *leaseExpirationDate;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0 requestDate:(id)a1;

@end
