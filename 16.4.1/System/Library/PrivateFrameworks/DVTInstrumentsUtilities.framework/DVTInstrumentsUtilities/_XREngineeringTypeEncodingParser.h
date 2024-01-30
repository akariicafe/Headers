@class NSString;

@interface _XREngineeringTypeEncodingParser : XRXMLElementParser

@property (retain, nonatomic) NSString *sentinel;
@property (nonatomic) long long bitWidth;

+ (id)_elementNameToClassMap;
+ (id)_elementNameToKVCMap;

- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)_handleStart;

@end
