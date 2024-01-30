@class NSString, NSSet, _CDInteraction, NSDate;

@interface _CDPeopleSuggesterContext : NSObject <NSCopying>

@property (retain) _CDInteraction *activeInteraction;
@property (retain) NSDate *date;
@property (retain) NSString *locationUUID;
@property (retain) NSString *title;
@property (retain) NSString *contactPrefix;
@property (retain) NSSet *seedContactIdentifiers;
@property (retain) NSSet *nearbyPeople;
@property (retain) NSString *consumerIdentifier;
@property (retain) NSSet *contentUTIs;

+ (id)currentContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
