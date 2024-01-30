@class NSString;

@interface CalSpotlightQueryResult : NSObject

@property (retain) NSString *identifier;
@property (retain) NSString *title;
@property (nonatomic, getter=isNaturalLanguageSuggestedEvent) BOOL naturalLanguageSuggestedEvent;

- (void).cxx_destruct;

@end
