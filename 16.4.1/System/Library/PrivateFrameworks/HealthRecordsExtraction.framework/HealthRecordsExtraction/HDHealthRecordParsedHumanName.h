@class NSString, NSArray, HKMedicalDateInterval;

@interface HDHealthRecordParsedHumanName : NSObject

@property (readonly, copy, nonatomic) NSString *family;
@property (readonly, copy, nonatomic) NSArray *given;
@property (readonly, copy, nonatomic) NSArray *prefix;
@property (readonly, copy, nonatomic) NSArray *suffix;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) HKMedicalDateInterval *period;
@property (readonly, copy, nonatomic) NSString *use;
@property (readonly, copy, nonatomic) NSString *fullName;

+ (id)parsedNamesWithHumanNames:(id)a0 FHIRVersion:(id)a1 error:(id *)a2;
+ (id)preferredNameInNames:(id)a0 FHIRVersion:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithHumanNameDictionary:(id)a0 FHIRVersion:(id)a1 error:(id *)a2;

@end
