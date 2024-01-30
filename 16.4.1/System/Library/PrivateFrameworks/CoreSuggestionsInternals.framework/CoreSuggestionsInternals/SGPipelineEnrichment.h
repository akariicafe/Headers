@class NSData;

@interface SGPipelineEnrichment : SGEntity

@property (retain, nonatomic) NSData *contentHash;
@property (nonatomic) BOOL pendingGeocode;

+ (id)address:(id)a0 forIdentity:(id)a1 parent:(id)a2 curated:(BOOL)a3 context:(id)a4 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 extractionInfo:(id)a6;
+ (id)birthday:(id)a0 forIdentity:(id)a1 parent:(id)a2 curated:(BOOL)a3 context:(id)a4 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 extractionInfo:(id)a6;
+ (id)emailAddress:(id)a0 forIdentity:(id)a1 parent:(id)a2 curated:(BOOL)a3 context:(id)a4 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 extractionInfo:(id)a6;
+ (id)instantMessageAddress:(id)a0 forIdentity:(id)a1 parent:(id)a2 curated:(BOOL)a3 context:(id)a4 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 extractionInfo:(id)a6;
+ (id)phoneNumber:(id)a0 forIdentity:(id)a1 parent:(id)a2 curated:(BOOL)a3 context:(id)a4 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 extractionInfo:(id)a6;
+ (id)socialProfile:(id)a0 forIdentity:(id)a1 parent:(id)a2 curated:(BOOL)a3 context:(id)a4 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 extractionInfo:(id)a6;

- (id)loggingIdentifier;
- (void).cxx_destruct;
- (void)setLastModifiedTimestamp:(struct SGUnixTimestamp_ { double x0; })a0;
- (BOOL)isEvent;
- (void)setCreationTimestamp:(struct SGUnixTimestamp_ { double x0; })a0;
- (BOOL)isPerson;
- (id)initWithContactDetailWithKey:(id)a0 type:(unsigned long long)a1 extractionInfo:(id)a2 curated:(BOOL)a3 parent:(id)a4 value:(id)a5 context:(id)a6 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a7;
- (id)initWithDuplicateKey:(id)a0 title:(id)a1 parent:(id)a2;
- (id)initWithIntentPersonAtDate:(id)a0 bundleId:(id)a1 handle:(id)a2 displayName:(id)a3;
- (id)initWithPseudoContactWithKey:(id)a0 parent:(id)a1 name:(id)a2;
- (id)toCloudKitRecordWithId:(id)a0 parentEntityType:(long long)a1;

@end
