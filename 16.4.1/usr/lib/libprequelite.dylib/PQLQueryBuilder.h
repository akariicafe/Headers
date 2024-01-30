@class NSError, NSMutableArray;

@interface PQLQueryBuilder : NSObject {
    NSMutableArray *_parameters;
    unsigned char _spec[1000];
    short _specLength;
}

@property (retain, nonatomic) NSError *lastError;

- (id)init;
- (void).cxx_destruct;
- (id)bindBooleanParameter:(BOOL)a0;
- (id)bindCharParameter:(char)a0;
- (id)bindDoubleParameter:(double)a0;
- (id)bindIntegerParameter:(int)a0;
- (id)bindLongParameter:(long long)a0;
- (id)bindObjectParameter:(id)a0;
- (id)bindParameter:(id)a0 spec:(unsigned char)a1;
- (id)bindShortParameter:(short)a0;
- (id)bindStringParameter:(id)a0;
- (id)bindUnsignedCharParameter:(unsigned char)a0;
- (id)bindUnsignedIntegerParameter:(unsigned int)a0;
- (id)bindUnsignedLongParameter:(unsigned long long)a0;
- (id)bindUnsignedShortParameter:(unsigned short)a0;

@end
