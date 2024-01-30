@class NSUUID, ICCRDocument, NSMutableOrderedSet, NSMutableArray;

@interface CRCoderUnarchiver : CRCoder

@property (copy, nonatomic) NSUUID *replica;
@property (retain, nonatomic) ICCRDocument *document;
@property (nonatomic) void *currentDocument;
@property (retain, nonatomic) NSMutableArray *allocedDocObjects;
@property (nonatomic) const void *currentDocObjectForDecodingPtr;
@property (retain, nonatomic) NSMutableOrderedSet *typeSetForDecoding;
@property (retain, nonatomic) NSMutableOrderedSet *keySet;
@property (retain, nonatomic) NSMutableArray *uuidArray;
@property (retain, nonatomic) NSMutableArray *completionHandlers;

+ (void)initialize;
+ (id)decodedDocumentFromData:(id)a0 replica:(id)a1;

- (double)decodeDoubleForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (id)decodeStringForKey:(id)a0;
- (unsigned long long)indexForKey:(id)a0;
- (unsigned long long)decodeUInt64ForKey:(id)a0;
- (void).cxx_destruct;
- (id)decodeDocumentFromData:(id)a0 replica:(id)a1;
- (void)addDecoderCompletionHandler:(id /* block */)a0 dependency:(id)a1 for:(id)a2;
- (id)allocedObjectAtIndex:(unsigned long long)a0 outNeedsInit:(BOOL *)a1;
- (const void *)currentDocumentObjectForDecoding;
- (const void *)currentObjectIDForKey:(id)a0;
- (id)decodeObjectForProtobufObjectID:(const void *)a0;
- (unsigned int)decodeUInt32ForKey:(id)a0;
- (id)decodeUUIDForKey:(id)a0;
- (id)decodeUUIDFromUUIDIndex:(unsigned long long)a0;
- (BOOL)hasDecodableValueForKey:(id)a0;
- (void)sortCompletionHandlers;
- (BOOL)willModifySelfInInitForClass:(Class)a0;
- (id)decodeDataForKey:(id)a0;

@end
