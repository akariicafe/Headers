@class NSUUID, NSString, NSNumber;

@interface HDConceptIndexEntry : NSObject

@property (readonly, copy, nonatomic) NSUUID *sampleUUID;
@property (readonly, nonatomic) long long conceptIdentifier;
@property (readonly, nonatomic) long long conceptVersion;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) unsigned long long compoundIndex;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSNumber *ontologyVersion;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSampleUUID:(id)a0 conceptIdentifier:(long long)a1 conceptVersion:(long long)a2 keyPath:(id)a3 compoundIndex:(unsigned long long)a4 type:(unsigned long long)a5 ontologyVersion:(id)a6;

@end
