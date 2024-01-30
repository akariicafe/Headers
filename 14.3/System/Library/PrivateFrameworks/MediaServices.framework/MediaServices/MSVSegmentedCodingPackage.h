@class NSString, NSMutableDictionary, NSURL, NSDictionary;

@interface MSVSegmentedCodingPackage : NSObject {
    BOOL _needsInfoDictionaryUpdate;
}

@property (class, readonly, nonatomic) NSString *packageTypeIdentifier;

@property (copy, nonatomic) NSURL *packageURL;
@property (retain, nonatomic) NSMutableDictionary *segmentEncoderMap;
@property (retain, nonatomic) NSMutableDictionary *infoDictionary;
@property (retain, nonatomic) Class archivedClass;
@property (readonly, nonatomic) NSDictionary *allVersions;

- (void).cxx_destruct;
- (void)reset;
- (BOOL)deleteWithError:(id *)a0;
- (BOOL)saveWithError:(id *)a0;
- (id)initWithURL:(id)a0;
- (id)encoderForSegment:(id)a0 version:(long long)a1;
- (id)decodersWithError:(id *)a0;
- (id)coderTypeForSegment:(id)a0;
- (BOOL)writeWithError:(id *)a0;
- (void)setNeedsInfoDictionaryUpdate;

@end
