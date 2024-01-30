@class NSString, NSData, NSURL, NSNumber;

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
@property (readonly, copy, nonatomic) NSData *_bookmarkData;
@property (readonly, nonatomic) BOOL _hasAssociatedAuditToken;
@property (nonatomic, getter=_isMarkedForDeletionOnDeallocation, setter=_setMarkedForDeletionOnDeallocation:) BOOL _markedForDeletionOnDeallocation;
@property (nonatomic, setter=_setDeletesFileOnDeallocationIfNeeded:) BOOL _deletesFileOnDeallocationIfNeeded;
@property (nonatomic, setter=_setAssociatedAuditToken:) struct { unsigned int x0[8]; } _associatedAuditToken;
@property (readonly, nonatomic) BOOL _isFileURLBased;
@property (copy, nonatomic, setter=_setRemovedOnCompletionValue:) NSNumber *_removedOnCompletionValue;
@property (readonly, copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) NSURL *fileURL;
@property (nonatomic) BOOL removedOnCompletion;

+ (void)initialize;
+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;
+ (id)fileWithData:(id)a0 filename:(id)a1 typeIdentifier:(id)a2;
+ (id)fileWithFileURL:(id)a0 filename:(id)a1 typeIdentifier:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_associatedAuditTokenIsEqualToAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)_initWithBookmarkData:(id)a0 filename:(id)a1 typeIdentifier:(id)a2 removedOnCompletion:(id)a3;
- (id)_initWithData:(id)a0 filename:(id)a1 fileURL:(id)a2 typeIdentifier:(id)a3 removedOnCompletion:(id)a4;
- (BOOL)_intents_enumerateObjectsOfClass:(Class)a0 withBlock:(id /* block */)a1;

@end
