@class NSString, NSNumber, NSSet;

@interface CLSNowPlayingStreamEventMetadata : NSObject <NSCopying>

@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *durationInSeconds;
@property (copy, nonatomic) NSSet *genres;
@property (copy, nonatomic) NSString *source;

- (id)description;
- (BOOL)isEqualToEventMetadata:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDuetKnowledgeEvent:(id)a0;

@end
