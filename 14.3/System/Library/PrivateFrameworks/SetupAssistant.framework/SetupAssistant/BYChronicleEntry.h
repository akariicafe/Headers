@class NSString;

@interface BYChronicleEntry : NSObject

@property (retain, nonatomic) NSString *productVersion;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToEntry:(id)a0;
- (id)initWithProductVersion:(id)a0;
- (BOOL)createdOnCurrentMajorVersion;

@end
