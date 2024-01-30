@class NSURL, NSString, BMDSL;

@interface BMDSLPersistentDerivatives : BMDSL

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *tableName;
@property (readonly, nonatomic) BMDSL *upstream;

+ (BOOL)supportsSecureCoding;

- (id)upstreams;
- (void)encodeWithCoder:(id)a0;
- (id)bpsPublisher;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 databaseURL:(id)a1 derivedTableName:(id)a2;
- (id)initWithUpstream:(id)a0 databaseURL:(id)a1 derivedTableName:(id)a2 name:(id)a3 version:(unsigned int)a4;

@end
