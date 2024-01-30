@class NSNumber, NSString;

@interface EDAMClientUsageMetrics : FATObject

@property (retain, nonatomic) NSNumber *sessions;
@property (retain, nonatomic) NSString *subjectConsumerKey;
@property (retain, nonatomic) NSString *subjectConsumerSecret;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
