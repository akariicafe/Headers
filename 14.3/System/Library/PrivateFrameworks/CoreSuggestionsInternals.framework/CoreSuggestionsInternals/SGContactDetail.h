@class NSString, SGRecordId, SGExtractionInfo, SGDuplicateKey;

@interface SGContactDetail : NSObject <NSCopying> {
    NSString *_normalizedValue;
}

@property (readonly, nonatomic) SGRecordId *recordId;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSString *normalizedValue;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) SGExtractionInfo *extractionInfo;
@property (readonly, nonatomic) NSString *sourceKey;
@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) SGDuplicateKey *duplicateKey;

+ (id)contactDetailFromEntity:(id)a0;
+ (id)contactDetail:(id)a0 label:(id)a1 type:(unsigned long long)a2 recordId:(id)a3 duplicateKey:(id)a4 sourceKey:(id)a5 context:(id)a6 extractionInfo:(id)a7;

- (void).cxx_destruct;
- (BOOL)isEqualToContactDetail:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithValue:(id)a0 label:(id)a1 type:(unsigned long long)a2 recordId:(id)a3 duplicateKey:(id)a4 sourceKey:(id)a5 context:(id)a6 extractionInfo:(id)a7;

@end
