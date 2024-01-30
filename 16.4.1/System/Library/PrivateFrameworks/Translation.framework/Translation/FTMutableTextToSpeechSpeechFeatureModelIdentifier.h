@class NSString;

@interface FTMutableTextToSpeechSpeechFeatureModelIdentifier : FTTextToSpeechSpeechFeatureModelIdentifier

@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
