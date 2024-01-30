@class NSDictionary;

@interface _UINotificationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (nonatomic) BOOL includePrivateEvents;
@property (retain, nonatomic) NSDictionary *feedbacks;

+ (id)privateConfiguration;
+ (id)privateConfigurationForTypes:(id)a0;
+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)feedbackKeyPaths;
- (BOOL)defaultEnabled;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
