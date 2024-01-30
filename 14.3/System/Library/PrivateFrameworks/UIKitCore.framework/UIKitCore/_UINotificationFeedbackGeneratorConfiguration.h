@class NSDictionary;

@interface _UINotificationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration

@property (nonatomic) BOOL includePrivateEvents;
@property (retain, nonatomic) NSDictionary *feedbacks;

+ (id)defaultConfiguration;
+ (id)privateConfiguration;
+ (id)privateConfigurationForTypes:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)feedbackKeyPaths;
- (BOOL)defaultEnabled;
- (BOOL)isEqual:(id)a0;

@end
