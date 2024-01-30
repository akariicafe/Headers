@class NSString;

@interface HAPMetadataUnit : HMFObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *unitDescription;

+ (id)init:(id)a0 withDictionary:(id)a1;

- (void)dump;
- (id)generateDictionary;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 description:(id)a1;

@end
