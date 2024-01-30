@class NSString, NSArray, NSData, NSFileHandle, NSNumber;

@interface WPXMLRPCEncoder : NSObject {
    NSFileHandle *_streamingCacheFile;
    BOOL _isResponse;
    BOOL _isFault;
    NSNumber *_faultCode;
    NSString *_faultString;
}

@property (readonly, nonatomic) NSString *method;
@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) NSData *body;

- (id)init;
- (void).cxx_destruct;
- (void)encodeObject:(id)a0;
- (void)appendFormat:(id)a0;
- (void)encodeData:(id)a0;
- (void)appendString:(id)a0;
- (id)initWithMethod:(id)a0 andParameters:(id)a1;
- (id)initWithResponseParams:(id)a0;
- (id)initWithResponseFaultCode:(id)a0 andString:(id)a1;
- (id)dataEncodedWithError:(id *)a0;
- (BOOL)encodeToFile:(id)a0 error:(id *)a1;
- (void)encodeForStreaming;
- (void)valueTag:(id)a0 value:(id)a1;
- (void)encodeArray:(id)a0;
- (void)encodeDictionary:(id)a0;
- (void)encodeBoolean:(struct __CFBoolean { } *)a0;
- (void)encodeNumber:(id)a0;
- (void)encodeString:(id)a0 omitTag:(BOOL)a1;
- (void)encodeDate:(id)a0;
- (void)encodeInputStream:(id)a0;
- (void)encodeFileHandle:(id)a0;
- (id)tmpFilePathForCache;

@end
