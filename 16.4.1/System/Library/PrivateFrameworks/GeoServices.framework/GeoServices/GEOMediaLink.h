@class NSString, NSArray;

@interface GEOMediaLink : NSObject

@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) int mediaType;
@property (readonly, nonatomic) int mediaSubType;
@property (readonly, nonatomic) NSArray *thirdPartyLinks;
@property (readonly, nonatomic) long long relatedCollectionItemIndex;
@property (readonly, nonatomic) unsigned long long position;

+ (id)mediaLinkFromProto:(id)a0;

- (void).cxx_destruct;
- (id)initWithAdamID:(id)a0 mediaType:(int)a1 mediaSubType:(int)a2 thirdPartyLinks:(id)a3 relatedCollectionItemIndex:(long long)a4 position:(unsigned long long)a5;

@end
