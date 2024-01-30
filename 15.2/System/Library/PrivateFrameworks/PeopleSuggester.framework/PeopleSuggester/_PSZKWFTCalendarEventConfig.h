@class NSArray;

@interface _PSZKWFTCalendarEventConfig : NSObject

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) long long defaultConfidenceCategory;
@property (readonly, nonatomic) double startSecondsFromQuery;
@property (readonly, nonatomic) double endSecondsFromQuery;
@property (readonly, copy, nonatomic) NSArray *urlDomainsToSkip;
@property (readonly, nonatomic) unsigned long long maxOtherParticipants;

- (id)initWithIsEnabled:(BOOL)a0 defaultConfidenceCategory:(long long)a1 startSecondsFromQuery:(double)a2 endSecondsFromQuery:(double)a3 urlDomainsToSkip:(id)a4 maxOtherParticipants:(unsigned long long)a5;
- (id)initWithIsEnabled:(BOOL)a0 defaultConfidenceCategory:(long long)a1;
- (void).cxx_destruct;

@end
