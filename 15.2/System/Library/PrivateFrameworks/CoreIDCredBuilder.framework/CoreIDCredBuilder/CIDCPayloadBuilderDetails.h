@class NSString, NSDictionary, NSData, NSDate;

@interface CIDCPayloadBuilderDetails : NSObject

@property unsigned long long format;
@property (retain) NSString *docType;
@property (retain) NSDictionary *elements;
@property (retain) NSDate *validFrom;
@property (retain) NSDate *validUntil;
@property (retain) NSData *deviceKey;
@property long long signingAlgorithm;

- (void).cxx_destruct;
- (id)initWithFormat:(unsigned long long)a0 docType:(id)a1 elements:(id)a2 validFrom:(id)a3 validUntil:(id)a4 deviceKey:(id)a5 signingAlgorithm:(long long)a6;
- (id)initWithFormat:(unsigned long long)a0 docType:(id)a1 elements:(id)a2 validFrom:(id)a3 validUntil:(id)a4 deviceKey:(id)a5;

@end
