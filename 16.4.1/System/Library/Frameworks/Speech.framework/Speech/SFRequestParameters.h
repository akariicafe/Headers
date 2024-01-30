@class NSString, NSArray, NSDictionary, NSURL;

@interface SFRequestParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *applicationVersion;
@property (copy, nonatomic) NSArray *inlineItemList;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) NSString *taskIdentifier;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *task;
@property (nonatomic) BOOL narrowband;
@property (copy, nonatomic) NSDictionary *recognitionOverrides;
@property (copy, nonatomic) NSURL *modelOverrideURL;
@property (nonatomic) double maximumRecognitionDuration;
@property (copy, nonatomic) NSURL *dynamicLanguageModel;
@property (copy, nonatomic) NSURL *dynamicVocabulary;
@property (nonatomic) BOOL detectMultipleUtterances;
@property (nonatomic) BOOL onDeviceOnly;
@property (nonatomic) BOOL enableAutoPunctuation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
