@class NSNumber, NSString;

@interface SASToken : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL addSpaceAfter;
@property (copy, nonatomic) NSNumber *confidenceScore;
@property (copy, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSString *ipaPhoneSequence;
@property (copy, nonatomic) NSString *originalText;
@property (copy, nonatomic) NSString *phoneSequence;
@property (copy, nonatomic) NSString *recognitionStability;
@property (nonatomic) BOOL removeSpaceAfter;
@property (nonatomic) BOOL removeSpaceBefore;
@property (copy, nonatomic) NSNumber *silenceStartTime;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)token;
+ (id)tokenWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
