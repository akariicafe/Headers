@class PGGraph, NSString, NSDictionary;

@interface PGGuessWhoNamingMetricEvent : NSObject <PLMetricEvent>

@property (retain, nonatomic) PGGraph *graph;
@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) BOOL hasMeNodeAndMeContact;
@property (nonatomic) unsigned long long numberOfPeopleToName;
@property (nonatomic) unsigned long long numberOfPeopleFavorited;
@property (nonatomic) unsigned long long librarySize;
@property (nonatomic) unsigned long long numberOfNamedPeople;
@property (nonatomic) double proportionOfNamedPeople;
@property (nonatomic) double numberOfPeopleWithAContactSuggestion;
@property (nonatomic) double recallContactSuggestion;
@property (nonatomic) double numberOfPeopleWithAHighConfidenceContactSuggestion;
@property (nonatomic) double recallHighConfidenceContactSuggestion;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
