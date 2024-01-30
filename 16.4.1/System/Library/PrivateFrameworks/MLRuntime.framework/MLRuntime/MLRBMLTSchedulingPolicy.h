@class NSDictionary, NSString;

@interface MLRBMLTSchedulingPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *attachmentsFactorName;
@property (readonly, copy, nonatomic) NSDictionary *dodMLPredicate;
@property (readonly, nonatomic) BOOL dodMLRequireDESRecordStore;
@property (readonly, nonatomic) unsigned long long maxEvaluation;
@property (readonly, copy, nonatomic) NSString *recipeFactorName;
@property (readonly, copy, nonatomic) NSString *recipeID;
@property (readonly, nonatomic) double taskMinGapInSeconds;
@property (readonly, nonatomic) unsigned long long taskType;
@property (readonly, nonatomic) unsigned long long upload;
@property (readonly, nonatomic) double maxRunTimeInSeconds;
@property (readonly, nonatomic) double pluginMinGapInSeconds;
@property (readonly, nonatomic) unsigned long long taskCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTRIPBStruct:(id)a0;

@end
