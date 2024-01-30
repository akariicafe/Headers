@class NSString;

@interface VUIContentRating : NSObject

@property (readonly, nonatomic) long long ratingSystemKind;
@property (readonly, nonatomic) long long ratingSystem;
@property (readonly, copy, nonatomic) NSString *ratingSystemString;
@property (readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property (readonly, copy, nonatomic) NSString *ratingLabel;
@property (readonly, nonatomic) unsigned long long rank;
@property (readonly, copy, nonatomic) NSString *ratingDescription;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

+ (id)new;

- (id)initWithStringRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithRatingSystem:(long long)a0 explicitContent:(BOOL)a1;
- (id)initWithRatingSystem:(long long)a0 ratingLabel:(id)a1 rank:(unsigned long long)a2 ratingDescription:(id)a3;
- (id)initWithRatingSystemString:(id)a0 ratingLabel:(id)a1 rank:(unsigned long long)a2 ratingDescription:(id)a3;

@end
