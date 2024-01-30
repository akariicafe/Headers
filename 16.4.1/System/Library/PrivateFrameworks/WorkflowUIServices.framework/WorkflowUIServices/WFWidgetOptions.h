@class NSNumber, INIntent;

@interface WFWidgetOptions : NSObject

@property (copy, nonatomic) INIntent *intent;
@property (nonatomic) long long family;
@property (retain, nonatomic) NSNumber *cornerRadius;

- (void).cxx_destruct;

@end
