@class NSString, NSDictionary;
@protocol BCBaseOAuth2Protocol;

@interface BCOAuth2Request : NSObject <BCOAuth2RequestProtocol>

@property (retain, nonatomic) NSString *businessIdentifier;
@property (retain, nonatomic) id<BCBaseOAuth2Protocol> oauth2;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0 URLProvider:(id)a1;

@end
