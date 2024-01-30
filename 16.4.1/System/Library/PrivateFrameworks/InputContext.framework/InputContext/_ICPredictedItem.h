@class NSString, _ICProactiveTrigger, NSURL, NSDate, NSDictionary;

@interface _ICPredictedItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) _ICProactiveTrigger *trigger;
@property (nonatomic) unsigned char itemType;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *originatingBundleID;
@property (readonly, nonatomic) NSURL *originatingWebsiteURL;
@property (nonatomic) unsigned long long predictionAge;
@property (readonly, nonatomic) BOOL shouldAggregate;
@property (nonatomic) unsigned char flags;
@property (nonatomic) unsigned char layoutHint;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSString *targetBundleID;
@property (readonly, nonatomic) NSDictionary *operationData;

+ (id)predictedItemFromQuickTypeItem:(id)a0 trigger:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)hasScoreSimilarToItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 itemType:(unsigned char)a1 score:(double)a2 value:(id)a3 label:(id)a4 name:(id)a5 date:(id)a6 originatingBundleID:(id)a7 originatingWebsiteURL:(id)a8 predictionAge:(unsigned long long)a9 shouldAggregate:(BOOL)a10 flags:(unsigned char)a11 targetBundleID:(id)a12 operationData:(id)a13 proactiveTrigger:(id)a14;
- (id)initWithIdentifier:(id)a0 score:(double)a1 value:(id)a2 label:(id)a3 name:(id)a4 date:(id)a5 originatingBundleID:(id)a6 originatingWebsiteURL:(id)a7 predictionAge:(unsigned long long)a8 shouldAggregate:(BOOL)a9 flags:(unsigned char)a10 proactiveTrigger:(id)a11;
- (BOOL)isEqualToPredictedItem:(id)a0;

@end
