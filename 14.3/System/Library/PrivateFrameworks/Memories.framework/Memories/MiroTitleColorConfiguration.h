@class NSDictionary, NSString;

@interface MiroTitleColorConfiguration : MiroColorConfiguration <MiroTitleColorConfiguration>

@property (nonatomic) int snapshotAspect;
@property (retain, nonatomic) NSDictionary *titleParameters;
@property (retain, nonatomic) NSString *debugTitleName;
@property (readonly, nonatomic) unsigned long long titleColorTreatment;
@property (readonly, nonatomic) unsigned long long subtitleColorTreatment;
@property (readonly, nonatomic) unsigned long long backgroundShapeColorTreatment;
@property (readonly, nonatomic) BOOL titleStyleHasColorRigging;
@property (readonly, nonatomic) BOOL titleStyleHasStrap;
@property (readonly, nonatomic) BOOL titleStyleIsCentered;
@property (readonly, nonatomic) BOOL titleStyleIsLowerThird;
@property (readonly, nonatomic) BOOL titleStyleIsSideBySide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)titleColorConfigurationWithTitleStyleID:(id)a0 snapshotAspect:(int)a1 randomizerSeed:(unsigned int)a2;

- (void).cxx_destruct;
- (id)initWithTitleStyleID:(id)a0 randomizerSeed:(unsigned int)a1;
- (BOOL)_verifyTitleStylesAreCorrect:(id)a0;

@end
