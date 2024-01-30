@class NSString;

@interface BCSGenericDataParser : NSObject <BCSDataParser>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseString:(id)a0;
+ (id)_parsedDataFromDDResult:(struct __DDResult { } *)a0 decodedString:(id)a1;


@end
