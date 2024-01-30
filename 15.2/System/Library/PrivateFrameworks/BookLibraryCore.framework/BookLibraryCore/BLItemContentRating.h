@class NSDictionary, NSString, NSMutableDictionary;

@interface BLItemContentRating : NSObject <NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) NSDictionary *contentRatingDictionary;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *ratingDescription;
@property (copy, nonatomic) NSString *ratingLabel;
@property (nonatomic) long long ratingSystem;

+ (long long)ratingSystemFromString:(id)a0;
+ (id)stringForRatingSystem:(long long)a0;

- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_setValueCopy:(id)a0 forProperty:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)_setValue:(id)a0 forProperty:(id)a1;

@end
