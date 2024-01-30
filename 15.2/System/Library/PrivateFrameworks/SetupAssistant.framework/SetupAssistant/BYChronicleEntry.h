@class NSString;

@interface BYChronicleEntry : NSObject

@property (retain, nonatomic) NSString *productVersion;

- (id)description;
- (BOOL)isEqualToEntry:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithProductVersion:(id)a0;
- (BOOL)createdOnCurrentMajorVersion;

@end
