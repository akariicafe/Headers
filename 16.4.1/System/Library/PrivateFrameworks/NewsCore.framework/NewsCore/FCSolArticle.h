@class NSString, NSSet;

@interface FCSolArticle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *publisherID;
@property (nonatomic) double score;
@property (nonatomic) BOOL accessible;
@property (nonatomic) BOOL evergreen;
@property (retain, nonatomic) NSSet *whitelistedTopicIDs;
@property (nonatomic) unsigned long long groupingReason;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 publisherID:(id)a1 accessible:(BOOL)a2 evergreen:(BOOL)a3 whitelistedTopicIDs:(id)a4;
- (id)initWithID:(id)a0 publisherID:(id)a1 score:(double)a2 accessible:(BOOL)a3 evergreen:(BOOL)a4;
- (id)initWithID:(id)a0 publisherID:(id)a1 score:(double)a2 accessible:(BOOL)a3 evergreen:(BOOL)a4 whitelistedTopicIDs:(id)a5;

@end
