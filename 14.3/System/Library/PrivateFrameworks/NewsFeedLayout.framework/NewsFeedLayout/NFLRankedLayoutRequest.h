@class NSObject;
@protocol NFLFeedTileInfo;

@interface NFLRankedLayoutRequest : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSObject<NFLFeedTileInfo> *tileInfo;
@property (readonly, nonatomic) unsigned long long columnSpan;
@property (readonly, nonatomic) long long cellType;
@property (readonly, nonatomic, getter=isShowingAccessoryText) BOOL showAccessoryText;

+ (id)requestWithTileInfo:(id)a0 columnSpan:(unsigned long long)a1 cellType:(long long)a2 showAccessoryText:(BOOL)a3;
+ (id)requestsWithTileInfo:(id)a0 columnSpans:(id)a1 cellType:(long long)a2 showAccessoryText:(BOOL)a3;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithTileInfo:(id)a0 columnSpan:(unsigned long long)a1 cellType:(long long)a2 showAccessoryText:(BOOL)a3;

@end
