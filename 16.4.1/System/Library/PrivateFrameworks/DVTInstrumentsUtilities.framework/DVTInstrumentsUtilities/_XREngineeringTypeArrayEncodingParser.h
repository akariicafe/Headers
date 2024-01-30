@class NSString, NSMutableArray;

@interface _XREngineeringTypeArrayEncodingParser : XRXMLElementParser {
    NSMutableArray *_fixedTypes;
    NSString *_remainderType;
}

+ (id)_elementNameToClassMap;

- (void)setSlot:(id)a0;
- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)_handleStart;
- (void)setRemainder:(id)a0;

@end
