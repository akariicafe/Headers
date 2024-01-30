@class NSString, NSArray, NSDictionary;

@interface CSSearchQueryContext : NSObject <NSSecureCoding, NSCopying> {
    NSArray *_fetchAttributes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short flags;
@property (nonatomic) unsigned int qos;
@property (retain, nonatomic) NSString *clientBundleID;
@property (retain, nonatomic) NSArray *fetchAttributes;
@property (retain, nonatomic) NSArray *protectionClasses;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *rankingQueries;
@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (retain, nonatomic) NSArray *markedTextArray;
@property (retain, nonatomic) NSArray *disableBundles;
@property (retain, nonatomic) NSString *userQuery;
@property (nonatomic) int rankingType;
@property (copy, nonatomic) NSArray *filterQueries;
@property (retain, nonatomic) NSString *filterQuery;
@property (nonatomic) long long strongRankingQueryCount;
@property (nonatomic) long long dominantRankingQueryCount;
@property (nonatomic) long long dominatedRankingQueryCount;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long completionResultCount;
@property (nonatomic) long long queryID;
@property (nonatomic) BOOL internal;
@property (nonatomic) BOOL grouped;
@property (nonatomic) BOOL live;
@property (nonatomic) BOOL counting;
@property (nonatomic) BOOL attribute;
@property (nonatomic) BOOL lowPriority;
@property (nonatomic) BOOL parseUserQuery;
@property (nonatomic) BOOL fsOnly;
@property (nonatomic) BOOL playback;
@property (nonatomic) BOOL includeUserActivities;
@property (nonatomic) unsigned __int128 fuzzyMask;
@property (nonatomic) unsigned __int128 fuzzyMatch;
@property (retain, nonatomic) NSString *completionString;
@property (retain, nonatomic) NSArray *completionAttributes;
@property (retain, nonatomic) NSArray *completionWeights;
@property (nonatomic) unsigned int completionOptions;
@property (copy, nonatomic) NSDictionary *options;
@property (nonatomic) double currentTime;
@property (retain, nonatomic) NSArray *mountPoints;
@property (retain, nonatomic) NSArray *scopes;

- (id)initWithXPCDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithQoS:(unsigned int)a0;
- (id)xpc_dictionary;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
