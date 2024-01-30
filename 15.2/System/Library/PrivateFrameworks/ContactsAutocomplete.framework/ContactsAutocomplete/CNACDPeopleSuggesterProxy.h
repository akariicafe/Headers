@protocol CNACDPeopleSuggesterFacade;

@interface CNACDPeopleSuggesterProxy : NSObject

@property (class, readonly) id<CNACDPeopleSuggesterFacade> bestAvailableProxy;
@property (class, readonly) id<CNACDPeopleSuggesterFacade> emptyProxy;

+ (id)coreDuetProxy;

@end
