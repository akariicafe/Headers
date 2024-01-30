@class NSString, NSDate;

@interface _ICNamedEntityRecord : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *phoneticName;
@property (readonly, nonatomic) unsigned char source;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) unsigned char changeType;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) double score;
@property (readonly, nonatomic) NSString *languageIdentifier;
@property (readonly, nonatomic) NSDate *contentCreationDate;
@property (readonly, nonatomic) NSDate *detectionDate;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) NSString *donorBundleIdentifier;
@property (readonly, nonatomic) unsigned long long detectionAlgorithm;

+ (id)namedEntityRecordWithName:(id)a0 phoneticName:(id)a1 type:(unsigned char)a2 languageIdentifier:(id)a3 contentCreationDate:(id)a4 detectionDate:(id)a5 score:(double)a6 source:(unsigned char)a7 sourceIdentifier:(id)a8 donorBundleIdentifier:(id)a9 detectionAlgorithm:(unsigned long long)a10;

- (BOOL)isEqualToNamedEntityRecord:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sourceString:(unsigned char)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 phoneticName:(id)a1 type:(unsigned char)a2 languageIdentifier:(id)a3 contentCreationDate:(id)a4 detectionDate:(id)a5 score:(double)a6 source:(unsigned char)a7 sourceIdentifier:(id)a8 donorBundleIdentifier:(id)a9 detectionAlgorithm:(unsigned long long)a10;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)typeString:(unsigned char)a0;
- (id)initWithName:(id)a0 source:(unsigned char)a1 type:(unsigned char)a2 score:(double)a3 changeType:(unsigned char)a4;

@end
