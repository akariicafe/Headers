@class NSString;

@interface WFShowDialogEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *dialogType;
@property (copy, nonatomic) NSString *presentationStyle;
@property (copy, nonatomic) NSString *dismissalType;
@property (copy, nonatomic) NSString *automationType;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
