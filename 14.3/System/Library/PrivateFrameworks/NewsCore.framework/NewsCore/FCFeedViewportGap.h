@class FCFeedRefreshSession, NSString;

@interface FCFeedViewportGap : NSObject <FCFeedElement>

@property (readonly, nonatomic) FCFeedRefreshSession *refreshSession;
@property (readonly, nonatomic) long long feedElementType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)pbGapFromGap:(id)a0 refreshSession:(id)a1 sharedStringIndex:(id)a2;
+ (id)gapFromPBGap:(id)a0;

- (id)copyWithRefreshSession:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRefreshSession:(id)a0;
- (BOOL)isGap;
- (BOOL)isEqual:(id)a0;

@end
