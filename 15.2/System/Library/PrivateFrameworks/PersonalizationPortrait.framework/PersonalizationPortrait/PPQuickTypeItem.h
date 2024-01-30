@class NSString, NSURL, NSDate;

@interface PPQuickTypeItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double score;
@property (nonatomic) unsigned char source;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) unsigned int fields;
@property (copy, nonatomic) NSString *originatingBundleID;
@property (copy, nonatomic) NSURL *originatingWebsiteURL;
@property (nonatomic) unsigned long long predictionAge;
@property (nonatomic) BOOL shouldAggregate;
@property (nonatomic) unsigned char flags;

+ (id)quickTypeItemWithLabel:(id)a0 value:(id)a1 name:(id)a2 date:(id)a3 fields:(unsigned int)a4 originatingBundleID:(id)a5 originatingWebsiteURL:(id)a6 predictionAge:(unsigned long long)a7 shouldAggregate:(BOOL)a8 flags:(unsigned char)a9 score:(double)a10 source:(unsigned char)a11 sourceIdentifier:(id)a12;

- (long long)compare:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)reverseCompare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasScoreSimilarToItem:(id)a0;
- (BOOL)isEqualToQuickTypeItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLabel:(id)a0 value:(id)a1 name:(id)a2 date:(id)a3 fields:(unsigned int)a4 originatingBundleID:(id)a5 originatingWebsiteURL:(id)a6 predictionAge:(unsigned long long)a7 shouldAggregate:(BOOL)a8 flags:(unsigned char)a9 score:(double)a10 source:(unsigned char)a11 sourceIdentifier:(id)a12;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
