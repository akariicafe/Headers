@class NSString, XREngineeringTypeEncodingConvention;

@interface _XREngineeringTypeDef : XRXMLElementParser <XREngineeringTypeDef> {
    BOOL _handledEncodingElement;
}

@property (retain, nonatomic) NSString *mnemonic;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *enumString;
@property (retain, nonatomic) NSString *usage;
@property (nonatomic) unsigned char impl;
@property (nonatomic) unsigned long long attributes;
@property (nonatomic) BOOL experimental;
@property (nonatomic) BOOL deprecated;
@property (retain, nonatomic) XREngineeringTypeEncodingConvention *encodingConvention;

+ (id)_elementNameToClassMap;
+ (id)_elementNameToKVCMap;

- (void)addAttribute:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_handleCompletion;
- (void)addString:(id)a0 elementType:(id)a1;
- (long long)conventionalBitWidth;
- (void)didHandleEncodingElement;
- (id)errorStringHeader;

@end
