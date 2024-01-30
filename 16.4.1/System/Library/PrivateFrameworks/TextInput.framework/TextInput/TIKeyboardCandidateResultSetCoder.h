@class NSData, NSMutableData;

@interface TIKeyboardCandidateResultSetCoder : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSMutableData *mutableData;
@property (nonatomic) unsigned long long offset;
@property (readonly, nonatomic) const char *bytes;
@property (readonly, nonatomic) const char *currentPosition;
@property (nonatomic) BOOL offsetHasPassedEndOfData;

+ (id)decodeWithData:(id)a0;
+ (id)candidateTypeToClassNameMap;
+ (Class)classFromCandidateType:(int)a0;
+ (id)encodeWithCandidateResultSet:(id)a0;

- (void)encodeBool:(BOOL)a0;
- (void)encodeDouble:(double)a0;
- (id)candidateResultSet;
- (void)encodeString:(id)a0;
- (void).cxx_destruct;
- (id)decodeCandidate;
- (id)initForEncoding;
- (id)dataFromCandidateResultSet:(id)a0;
- (BOOL)decodeBool;
- (unsigned char)decodeByte;
- (double)decodeDouble;
- (id)decodePointerValueArray;
- (unsigned short)decodeShort;
- (id)decodeString;
- (id)decodeStringArray;
- (unsigned int)decodeUInt32;
- (unsigned long long)decodeUInt64;
- (void)encodeByte:(unsigned char)a0;
- (void)encodePointerValueArray:(id)a0;
- (void)encodeShort:(unsigned short)a0;
- (void)encodeStringArray:(id)a0;
- (void)encodeUInt32:(unsigned int)a0;
- (void)encodeUInt64:(unsigned long long)a0;
- (id)initForDecodingWithData:(id)a0;
- (id)initWithData:(id)a0 mutableData:(id)a1;
- (BOOL)isDecoding;
- (void)readNumberOfBytes:(unsigned long long)a0 into:(void *)a1;

@end
