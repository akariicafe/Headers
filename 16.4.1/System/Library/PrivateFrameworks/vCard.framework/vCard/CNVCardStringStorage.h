@class NSString, NSMutableString;

@interface CNVCardStringStorage : NSObject <CNVCardSerializationStorage> {
    NSMutableString *_string;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storageWithString:(id)a0;

- (void)appendFormat:(id)a0;
- (void)appendString:(id)a0;
- (void)appendData:(id)a0;
- (id)initWithString:(id)a0;
- (unsigned long long)currentLength;
- (unsigned long long)estimatedDataLength;
- (void).cxx_destruct;
- (id)insertionMarker;
- (void)appendString:(id)a0 usingEncoding:(unsigned long long)a1;
- (void)insertString:(id)a0 atMarker:(id)a1;

@end
