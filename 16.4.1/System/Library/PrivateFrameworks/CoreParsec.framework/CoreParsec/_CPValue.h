@class NSString, NSData, _CPStruct, _CPListValue;

@interface _CPValue : PBCodable <_CPValue, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int null_value;
@property (nonatomic) double number_value;
@property (copy, nonatomic) NSString *string_value;
@property (nonatomic) BOOL bool_value;
@property (retain, nonatomic) _CPStruct *struct_value;
@property (retain, nonatomic) _CPListValue *list_value;
@property (copy, nonatomic) NSData *bytes_value;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)clearKind;

@end
