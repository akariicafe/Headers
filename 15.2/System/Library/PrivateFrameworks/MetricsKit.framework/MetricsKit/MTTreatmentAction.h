@class NSString, NSArray, NSDictionary;

@interface MTTreatmentAction : NSObject

@property (retain, nonatomic) NSString *field;
@property (retain, nonatomic) NSString *sourceField;
@property (retain, nonatomic) id overrideFieldValue;
@property (nonatomic) BOOL blacklisted;
@property (retain, nonatomic) NSArray *blacklistedFields;
@property (retain, nonatomic) NSArray *whitelistedFields;
@property (retain, nonatomic) NSDictionary *fieldsMap;
@property (retain, nonatomic) NSArray *dstKeyPath;
@property (retain, nonatomic) NSArray *srcKeyPath;

+ (id)treatmentActionWithField:(id)a0 configData:(id)a1;

- (void).cxx_destruct;
- (void)performActionWithContext:(id)a0;
- (id)initWithField:(id)a0 configDictionary:(id)a1;
- (void)computeKeyPaths;
- (id)performAction:(id)a0 atKeyIndex:(long long)a1 context:(id)a2;
- (id)performAction:(id)a0 context:(id)a1;

@end
