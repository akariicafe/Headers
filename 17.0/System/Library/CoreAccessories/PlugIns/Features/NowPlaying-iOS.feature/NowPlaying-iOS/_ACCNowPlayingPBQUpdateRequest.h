@class NSString;

@interface _ACCNowPlayingPBQUpdateRequest : NSObject

@property (readonly, nonatomic) NSString *requestID;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) unsigned int upToCount;
@property (nonatomic) unsigned int infoMask;
@property (nonatomic) BOOL allowNonLibrary;
@property (nonatomic) unsigned long long startTimeMs;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 startIndex:(unsigned int)a1 upToCount:(unsigned int)a2 infoMask:(unsigned int)a3 allowNonLibrary:(BOOL)a4;

@end
