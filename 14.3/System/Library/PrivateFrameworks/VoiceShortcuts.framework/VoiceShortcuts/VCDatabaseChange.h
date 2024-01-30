@class NSSet, WFDatabase, WFDatabaseObjectDescriptor, NSString, WFRecord;

@interface VCDatabaseChange : NSObject <VCSYChange>

@property (class, readonly, nonatomic) Class recordClass;
@property (class, readonly, nonatomic) unsigned long long databaseObjectType;
@property (class, readonly, nonatomic) NSSet *recordProperties;
@property (class, readonly, nonatomic) int messageType;

@property (copy, nonatomic) WFRecord *record;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, copy, nonatomic) WFDatabaseObjectDescriptor *descriptor;
@property (readonly, nonatomic) unsigned long long estimatedSize;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) long long changeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *sequencer;

- (void).cxx_destruct;
- (BOOL)writeTo:(id)a0 error:(id *)a1;
- (BOOL)readFrom:(id)a0 error:(id *)a1;
- (id)initWithObjectIdentifier:(id)a0 changeType:(long long)a1;
- (id)initWithDescriptor:(id)a0 inDatabase:(id)a1 changeType:(long long)a2;
- (id)recordWithError:(id *)a0;

@end
