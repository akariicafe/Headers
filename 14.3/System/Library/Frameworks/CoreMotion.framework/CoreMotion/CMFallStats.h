@class NSString, NSData;

@interface CMFallStats : NSObject <SRSampling, SRSampleExporting, NSSecureCoding> {
    NSData *_data;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double iOStime;
@property (readonly, nonatomic) int fallType;
@property (readonly, nonatomic) BOOL isNearFall;

- (id)initWithData:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)binarySampleRepresentation;
- (id)initWithBinarySampleRepresentation:(id)a0 metadata:(id)a1 timestamp:(double)a2;
- (id)itemsIterator;
- (void)_decodeMeta;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBufferAndLength:(char *)a0 length:(unsigned long long)a1;
- (id)sr_exportRepresentationEnumerator;

@end
