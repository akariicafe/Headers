@class NSArray, NSString, NSURL;

@interface SAGKSummaryStructuredAnswer : AceObject <SAGKStructuredAnswer>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *answerPropertyGroups;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSURL *image;
@property (copy, nonatomic) NSString *imageCaption;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleAnnotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)summaryStructuredAnswer;
+ (id)summaryStructuredAnswerWithDictionary:(id)a0 context:(id)a1;

@end
