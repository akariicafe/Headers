@class NSString, NSArray, NSSet, NSNumber;

@interface HAPMetadataService : HMFObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *svcDescription;
@property (retain, nonatomic) NSString *uuidStr;
@property (retain, nonatomic) NSString *btleuuidStr;
@property (retain, nonatomic) NSNumber *properties;
@property (retain, nonatomic) NSArray *linkedServices;
@property (retain, nonatomic) NSSet *mandatoryCharacteristics;
@property (retain, nonatomic) NSSet *optionalCharacteristics;
@property (nonatomic) BOOL allowAssociatedService;

- (void)dump;
- (void).cxx_destruct;
- (id)description;
- (id)generateDictionary:(id)a0 metadata:(id)a1;
- (id)initWithName:(id)a0 uuid:(id)a1 description:(id)a2 mandatoryChrTypes:(id)a3 properties:(id)a4 linkedServices:(id)a5;

@end
