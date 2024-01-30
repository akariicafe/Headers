@interface NSEncodingDetector : NSObject {
    unsigned long long _givenNumBytes;
    unsigned long long _numChars;
    unsigned long long _numMultiByteChars;
    unsigned long long _numSingleBytechars;
    unsigned long long _skipBytes;
    unsigned long long _numZeroBytes;
    unsigned long long _mostFrqChars;
    unsigned long long _numBigrams;
    unsigned long long _numRep;
    unsigned long long _numDirect;
    unsigned long long _numBase64;
    unsigned long long _numSeq;
    unsigned long long _numTrigram;
    unsigned long long _numLower;
    unsigned long long _numHigher;
    double _weight;
    BOOL _hasBase64;
    BOOL _isBigEndian;
    BOOL _hasBOM;
    unsigned int _tag;
}

@property (readonly) unsigned long long nsEncoding;
@property (readonly) unsigned int cfEncoding;

+ (id)detectorForCFStringEncoding:(unsigned int)a0 allowBackupDetectors:(BOOL)a1;
+ (Class)classForCFStringEncoding:(unsigned int)a0;

- (double)confidence;
- (void)softReset;
- (unsigned long long)recognizeString:(const char *)a0 withDataLength:(unsigned long long)a1 intoBuffer:(id)a2;
- (id)initWithNSStringEncoding:(unsigned long long)a0 CFStringEncoding:(unsigned int)a1;
- (void)reset;
- (double)bytesRatio;
- (unsigned long long)maxSkipBytes;
- (double)confidenceWith2Chars;
- (double)multiBytesRatio;

@end
