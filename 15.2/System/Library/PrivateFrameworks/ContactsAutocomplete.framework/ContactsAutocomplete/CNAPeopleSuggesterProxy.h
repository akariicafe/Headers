@protocol CNAPeopleSuggesterFacade;

@interface CNAPeopleSuggesterProxy : NSObject

@property (class, readonly) id<CNAPeopleSuggesterFacade> bestAvailableProxy;
@property (class, readonly) id<CNAPeopleSuggesterFacade> emptyProxy;

+ (id)peopleSuggesterProxy;

@end
