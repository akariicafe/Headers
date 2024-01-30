@class NSString, NSDate;

@interface PHUserFeedback : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long type;
@property (readonly) unsigned long long feature;
@property (readonly, copy) NSString *context;
@property (readonly, copy) NSDate *lastModifiedDate;

+ (id)_contextForMemoryFeature:(id)a0;
+ (id)_contextForSongIdentifiers:(id)a0;
+ (unsigned long long)_feedbackFeatureForMemoryFeature:(id)a0;
+ (unsigned long long)mergeFeedbackType:(unsigned long long)a0 withOtherFeedbackType:(unsigned long long)a1;
+ (id)negativeUserFeedbackForMemoryFeature:(id)a0 existingFeedback:(id)a1;
+ (id)negativeUserFeedbackForMemoryMusicWithSongIdentifier:(id)a0 existingFeedback:(id)a1;
+ (id)negativeUserFeedbackForPerson:(id)a0;
+ (unsigned long long)sumFeedbackType:(unsigned long long)a0 withOtherFeedbackType:(unsigned long long)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)contextAsDateIntervalWithError:(id *)a0;
- (id)contextAsDateWithError:(id *)a0;
- (id)contextAsListOfSongIdentifiersWithError:(id *)a0;
- (id)contextAsLocationWithError:(id *)a0;
- (id)contextAsStringWithError:(id *)a0;
- (id)initWithType:(unsigned long long)a0 feature:(unsigned long long)a1 context:(id)a2;
- (id)initWithType:(unsigned long long)a0 feature:(unsigned long long)a1 context:(id)a2 lastModifiedDate:(id)a3;

@end
