@class NSString, SFUDataRepresentation;

@interface TSPDistributableArchiveEntry : NSObject <TSPIdentifiedDataRepresentation> {
    long long _identifier;
    NSString *_fileStateIdentifier;
    SFUDataRepresentation *_objectData;
    void *_ownedIds;
}

@property (copy, nonatomic) NSString *relativeDataPath;
@property (nonatomic) int classType;
@property (nonatomic) unsigned int version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(long long)a0;
- (long long)identifier;
- (BOOL)isLoaded;
- (id)dataRepresentation;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setFileStateIdentifier:(id)a0;
- (id)fileStateIdentifier;
- (const void *)ownedIds;
- (BOOL)setDataRepresentation:(id)a0 shouldCopy:(BOOL)a1 error:(id *)a2;
- (void)setOwnedIds:(const void *)a0;

@end
