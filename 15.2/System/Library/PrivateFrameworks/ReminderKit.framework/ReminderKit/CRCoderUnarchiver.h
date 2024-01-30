@class NSUUID, CRDocument, NSMutableOrderedSet, NSMutableArray;

@interface CRCoderUnarchiver : CRCoder

@property (copy, nonatomic) NSUUID *replica;
@property (retain, nonatomic) CRDocument *document;
@property (nonatomic) void *currentDocument;
@property (retain, nonatomic) NSMutableArray *allocedDocObjects;
@property (nonatomic) const void *currentDocObjectForDecodingPtr;
@property (retain, nonatomic) NSMutableOrderedSet *typeSetForDecoding;
@property (retain, nonatomic) NSMutableOrderedSet *keySet;
@property (retain, nonatomic) NSMutableArray *uuidArray;
@property (retain, nonatomic) NSMutableArray *completionHandlers;

+ (void)initialize;
+ (id)decodedDocumentFromData:(id)a0 replica:(id)a1;

- (id)decodeObjectForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (id)decodeStringForKey:(id)a0;
- (unsigned long long)indexForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)decodeUInt64ForKey:(id)a0;
- (const void *)currentDocumentObjectForDecoding;
- (id)decodeObjectForProtobufObjectID:(const void *)a0;
- (void)addDecoderCompletionHandler:(id /* block */)a0 dependency:(id)a1 for:(id)a2;
- (BOOL)hasDecodableValueForKey:(id)a0;
- (id)decodeDocumentFromData:(id)a0 replica:(id)a1;
- (BOOL)willModifySelfInInitForClass:(Class)a0;
- (id)allocedObjectAtIndex:(unsigned long long)a0 outNeedsInit:(BOOL *)a1;
- (void)sortCompletionHandlers;
- (const void *)currentObjectIDForKey:(id)a0;
- (id)decodeUUIDForKey:(id)a0;
- (unsigned int)decodeUInt32ForKey:(id)a0;
- (id)decodeUUIDFromUUIDIndex:(unsigned long long)a0;

@end
