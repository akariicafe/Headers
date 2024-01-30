@class NSArray, NSString;

@interface GKPlayerActivitySectionInternal : GKInternalRepresentation

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *instrumentationKey;

+ (id)secureCodedPropertyKeys;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
