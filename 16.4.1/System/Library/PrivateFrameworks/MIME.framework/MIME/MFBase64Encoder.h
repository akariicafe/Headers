@interface MFBase64Encoder : MFBaseFilterDataConsumer {
    const char *_table;
    unsigned long long _left;
    unsigned char _leftovers[3];
    unsigned long long _line;
}

@property (nonatomic) unsigned long long lineBreak;
@property (nonatomic) BOOL allowSlash;
@property (nonatomic) char padChar;

- (id)initWithConsumers:(id)a0;
- (long long)appendData:(id)a0;
- (void)done;
- (void)setStandardLineBreak;

@end
