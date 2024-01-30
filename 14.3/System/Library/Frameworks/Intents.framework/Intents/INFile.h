@class NSString, NSData, NSURL;

@interface INFile : NSObject <INEnumerable, INJSONSerializable, NSSecureCoding> {
    NSData *_memoryMappedFileData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL _hasAssociatedAuditToken;
@property (nonatomic, getter=_isMarkedForDeletionOnDeallocation, setter=_setMarkedForDeletionOnDeallocation:) BOOL _markedForDeletionOnDeallocation;
@property (nonatomic, setter=_setDeletesFileOnDeallocationIfNeeded:) BOOL _deletesFileOnDeallocationIfNeeded;
@property (readonly, nonatomic) BOOL _isFileURLBased;
@property (readonly, copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) NSURL *fileURL;

+ (void)initialize;
+ (id)fileWithData:(id)a0 filename:(id)a1 typeIdentifier:(id)a2;
+ (id)fileWithFileURL:(id)a0 filename:(id)a1 typeIdentifier:(id)a2;
+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)_initWithData:(id)a0 filename:(id)a1 fileURL:(id)a2 typeIdentifier:(id)a3;
- (BOOL)_associatedAuditTokenIsEqualToAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)_setAssociatedAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)initWithCoder:(id)a0;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)a0 withBlock:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
