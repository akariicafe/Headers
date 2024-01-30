@class NSArray, NSString;

@interface JEHLSItem : NSObject <JEMediaPlaylistItem>

@property (nonatomic) unsigned long long startOverallPosition;
@property (nonatomic) unsigned long long startPosition;
@property (retain, nonatomic) NSArray *eventData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)comparator;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartOverallPosition:(unsigned long long)a0 metricsData:(id)a1;

@end
