@class NSData;

@interface AAUpgradeiOSTermsResponse : AAResponse

@property (readonly, nonatomic) NSData *xmlUIData;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;
- (id)responseXMLData;
- (BOOL)bodyIsPlist;

@end
