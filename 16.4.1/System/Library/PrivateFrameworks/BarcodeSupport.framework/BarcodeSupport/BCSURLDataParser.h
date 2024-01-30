@class NSString;

@interface BCSURLDataParser : NSObject <BCSDataParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseString:(id)a0;
+ (id)_canonicalizeMessageURL:(id)a0;
+ (long long)_dataTypeForSchemeIfSupportedByDataDetectors:(id)a0;
+ (id)parseURL:(id)a0;
+ (id)parseURL:(id)a0 originalString:(id)a1;


@end
