@class NSMutableDictionary;

@interface CLSInsightEvent : CLSObject

@property (retain, nonatomic) NSMutableDictionary *info;
@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;
+ (id)supportedInfoDictionaryClasses;

- (id)init;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void)mergeWithObject:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (id)_infoDictDescription;

@end
