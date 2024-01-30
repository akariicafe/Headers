@class NSString, NSDictionary, NSNumber;

@interface SignpostObject : SignpostSupportObject

@property (nonatomic) unsigned long long signpostId;
@property (nonatomic) unsigned long long scope;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) NSString *scopeString;
@property (nonatomic) BOOL telemetryEnabled;
@property (retain, nonatomic) NSString *string1Name;
@property (retain, nonatomic) NSString *string1Value;
@property (retain, nonatomic) NSString *string2Name;
@property (retain, nonatomic) NSString *string2Value;
@property (retain, nonatomic) NSString *number1Name;
@property (retain, nonatomic) NSNumber *number1Value;
@property (retain, nonatomic) NSString *number2Name;
@property (retain, nonatomic) NSNumber *number2Value;

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)a0 shouldRedact:(BOOL)a1;
- (id)_descriptionStringForColumn:(unsigned long long)a0 timeFormat:(unsigned long long)a1 asBegin:(BOOL)a2;
- (id)initWithSubsystem:(id)a0 category:(id)a1 name:(id)a2 signpostId:(unsigned long long)a3 scope:(unsigned long long)a4 timebaseRatio:(double)a5 attributes:(id)a6;

@end
