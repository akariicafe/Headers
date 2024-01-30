@class HLPHelpTopicItem, NSArray, NSString;

@interface HLPLoadInfo : NSObject

@property (readonly, nonatomic) HLPHelpTopicItem *helpTopicItem;
@property (readonly, nonatomic) long long accessType;
@property (readonly, nonatomic) NSArray *searchTerms;
@property (readonly, nonatomic) NSString *anchor;
@property (readonly, nonatomic) NSString *analyticsSourceType;
@property (nonatomic) BOOL analyticsLogged;

+ (id)infoWithTopicItem:(id)a0 accesstype:(long long)a1 searchTerms:(id)a2 anchor:(id)a3;

- (void).cxx_destruct;
- (id)_initWithTopicItem:(id)a0 accessType:(long long)a1 searchTerms:(id)a2 anchor:(id)a3;

@end
