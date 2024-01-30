@class NSDictionary;

@interface CADSequenceToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *allDBSequenceMap;

- (void)encodeWithCoder:(id)a0;
- (id)serializedSequenceString;
- (id)initWithCoder:(id)a0;
- (int)mainDBSequence;
- (BOOL)isEqual:(id)a0;
- (id)initWithMainDBSequence:(int)a0;
- (id)description;
- (id)initWithSerializedSequenceString:(id)a0;
- (int)sequenceForDatabaseID:(int)a0;
- (id)initWithAllDBSequenceMap:(id)a0;
- (void).cxx_destruct;

@end
