@class NSString, NSArray, NSMutableDictionary, NSDictionary, NSData;

@interface SFSearchSuggestion : NSObject <SFSearchSuggestion, NSSecureCoding, NSCopying> {
    struct { unsigned char score : 1; unsigned char type : 1; unsigned char previouslyEngaged : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *suggestion;
@property (copy, nonatomic) NSString *query;
@property (nonatomic) double score;
@property (nonatomic) int type;
@property (copy, nonatomic) NSArray *duplicateSuggestions;
@property (copy, nonatomic) NSString *topicIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL previouslyEngaged;
@property (copy, nonatomic) NSString *fbr;
@property (copy, nonatomic) NSString *scopedSearchApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *utteranceText;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSMutableDictionary *serverFeatures;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasScore;
- (BOOL)hasType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSuggestion:(id)a0 query:(id)a1 score:(double)a2 type:(int)a3;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (BOOL)hasPreviouslyEngaged;
- (id)initWithIdentifier:(id)a0 suggestion:(id)a1 query:(id)a2 score:(double)a3 type:(int)a4;
- (void)encodeWithCoder:(id)a0;

@end
