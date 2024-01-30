@class NSMutableData;

@interface MFBase64Decoder : MFBaseFilterDataConsumer {
    NSMutableData *_leftovers;
    unsigned int _decodedBits;
    unsigned long long _equalCount;
    const char *_table;
}

@property (nonatomic) BOOL convertCommas;
@property (nonatomic) BOOL isBound;
@property (readonly, nonatomic) unsigned long long unconverted;

+ (BOOL)isValidBase64:(id)a0;

- (void).cxx_destruct;
- (long long)appendData:(id)a0;
- (void)done;
- (id)initWithConsumers:(id)a0;
- (unsigned long long)_decodeBytes:(const char *)a0 end:(const char *)a1 into:(char *)a2 length:(unsigned long long)a3 startingAt:(unsigned long long)a4 outEncodedOffset:(unsigned long long *)a5;

@end
