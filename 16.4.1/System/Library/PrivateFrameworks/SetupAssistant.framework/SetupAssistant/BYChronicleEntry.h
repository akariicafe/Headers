@class NSString;

@interface BYChronicleEntry : NSObject

@property (retain, nonatomic) NSString *productVersion;

- (id)dictionaryRepresentation;
- (BOOL)isEqualToEntry:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)createdOnCurrentMajorVersion;
- (id)initWithProductVersion:(id)a0;

@end
