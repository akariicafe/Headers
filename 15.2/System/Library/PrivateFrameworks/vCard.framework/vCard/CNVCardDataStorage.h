@class NSString, NSMutableData;

@interface CNVCardDataStorage : NSObject <CNVCardSerializationStorage> {
    NSMutableData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)storageWithData:(id)a0;

- (void)appendData:(id)a0;
- (unsigned long long)currentLength;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (void)appendString:(id)a0;
- (void)appendFormat:(id)a0;
- (unsigned long long)estimatedDataLength;
- (id)insertionMarker;
- (void)insertString:(id)a0 atMarker:(id)a1;
- (void)appendString:(id)a0 usingEncoding:(unsigned long long)a1;

@end
