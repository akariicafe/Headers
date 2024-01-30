@class NSString, NSDateInterval;

@interface PGChapterTitle : NSObject

@property (readonly, nonatomic) NSString *localizedTitleString;
@property (readonly, nonatomic) NSDateInterval *chapterDateInterval;

- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocalizedTitleString:(id)a0 chapterDateInterval:(id)a1;

@end
