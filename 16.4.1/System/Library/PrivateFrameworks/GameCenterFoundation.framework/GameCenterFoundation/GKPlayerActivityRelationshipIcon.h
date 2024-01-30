@class NSString, NSNumber;

@interface GKPlayerActivityRelationshipIcon : GKInternalRepresentation

@property (retain, nonatomic) NSString *url;
@property (nonatomic) long long platform;
@property (nonatomic) NSNumber *width;
@property (nonatomic) NSNumber *height;

+ (id)secureCodedPropertyKeys;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
