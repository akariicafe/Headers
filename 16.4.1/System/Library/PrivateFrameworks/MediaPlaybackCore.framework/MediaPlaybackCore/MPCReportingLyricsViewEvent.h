@class NSString, MPModelPlayEvent, NSData, MPModelSong;

@interface MPCReportingLyricsViewEvent : NSObject

@property (retain, nonatomic) MPModelSong *modelSong;
@property (retain, nonatomic) MPModelPlayEvent *modelPlayEvent;
@property (retain, nonatomic) NSString *lyricsID;
@property (nonatomic) double visibleDuration;
@property (nonatomic) long long displayType;
@property (nonatomic) long long displayedCharacterCount;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *featureName;
@property (copy, nonatomic) NSString *queueGroupingID;
@property (copy, nonatomic) NSData *recommendationData;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long userPreferenceSyllable;

- (void).cxx_destruct;

@end
