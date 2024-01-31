@class NSString, NSArray, NSData, NSDictionary;

@interface AVAirMessageParts : NSObject <AVAirTransportReverseTransformationResultProtocol> {
    NSDictionary *_uniqueHeaders;
    NSArray *_repeatedHeaders;
}

@property (readonly, nonatomic) id airMessage;
@property (retain, nonatomic) NSData *uncompressedBodyData;
@property (readonly, nonatomic) BOOL isIncomplete;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSArray *headers;
@property (readonly, nonatomic) long long expectedBodyLength;
@property (readonly, nonatomic) NSData *rawBodyData;
@property (readonly, nonatomic) NSData *extraData;
@property (readonly, nonatomic) NSDictionary *uniqueHeaders;
@property (readonly, nonatomic) NSArray *repeatedHeaders;
@property (readonly, nonatomic) NSString *bodyAsUTF8Text;
@property (readonly, nonatomic) id bodyAsJSON;
@property (readonly, nonatomic) NSDictionary *bodyAsJSONDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messagePartsWithData:(id)a0 lineSeparator:(id)a1 data:(id)a2 headerBodySeparator:(id)a3 data:(id)a4 bodyLengthKey:(id)a5;
+ (void)registerClass:(Class)a0 forMessageVersion:(id)a1;

- (void).cxx_destruct;
- (void)_identifyUniqueAndRepeatedHeadersIfNecessary;
- (Class)_matchingClass;
- (void)_setIncomplete;
- (id)decompressBodyUsingAlgorithm:(long long)a0;
- (id)decompressBodyUsingNamedAlgorithm:(id)a0;
- (id)initWithVersion:(id)a0 headers:(id)a1 expectedBodyLength:(long long)a2 body:(id)a3 extra:(id)a4;
- (BOOL)shouldCallReverseTransformerAgain;

@end
