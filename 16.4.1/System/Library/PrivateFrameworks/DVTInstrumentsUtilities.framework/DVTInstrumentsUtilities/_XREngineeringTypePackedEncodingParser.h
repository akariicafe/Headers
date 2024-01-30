@class XREngineeringTypeBitpackedEncodingConvention;

@interface _XREngineeringTypePackedEncodingParser : XRXMLElementParser

@property (retain, nonatomic) XREngineeringTypeBitpackedEncodingConvention *convention;

+ (id)_elementNameToClassMap;

- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)_handleStart;

@end
