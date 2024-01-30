@class NSString, NSDictionary, CMSPlayerContext, NSDate, CMSContentFailure;

@interface CMSUpdateActivityRequest : NSObject <CMSCoding>

@property (retain, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) NSDictionary *constraints;
@property (retain, nonatomic) NSDictionary *userActivityDictionary;
@property (retain, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long report;
@property (retain, nonatomic) CMSPlayerContext *nowPlaying;
@property (retain, nonatomic) CMSPlayerContext *previouslyPlaying;
@property (retain, nonatomic) CMSContentFailure *contentFailure;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)cmsCoded;
- (id)initForActivity:(id)a0 failure:(id)a1 whilePlaying:(id)a2;
- (id)initForActivity:(id)a0 report:(unsigned long long)a1 nowPlaying:(id)a2 previouslyPlaying:(id)a3;

@end
