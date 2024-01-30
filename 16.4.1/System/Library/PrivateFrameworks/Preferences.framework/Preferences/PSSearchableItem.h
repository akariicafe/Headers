@class NSString, NSArray, NSNumber;

@interface PSSearchableItem : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *classIdentifier;
@property (retain, nonatomic) NSString *contentDescription;
@property (retain, nonatomic) NSArray *keywords;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *rankingHint;
@property (retain, nonatomic) NSArray *requiredCapabilities;
@property (retain, nonatomic) NSArray *requiredCapabilitiesOr;

- (void).cxx_destruct;
- (id)toCSSearchableItem;
- (id)toManifestDictionary;

@end
