@class NSString, NSDictionary;

@interface PGSurveyQuestion : NSObject <PGQuestion>

@property (readonly, copy, nonatomic) NSString *entityIdentifier;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) unsigned short state;
@property (readonly, nonatomic) unsigned short entityType;
@property (readonly, nonatomic) unsigned short displayType;
@property (readonly, nonatomic) double localFactoryScore;
@property (nonatomic) double score;
@property (readonly, copy, nonatomic) NSDictionary *additionalInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remove;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEquivalentToPersistedQuestion:(id)a0;
- (BOOL)isEquivalentToQuestion:(id)a0;
- (void)persistWithCreationDate:(id)a0 questionVersion:(short)a1;

@end
