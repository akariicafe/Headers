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

- (id)initWithURL:(id)a0;
- (BOOL)saveWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)deleteWithError:(id *)a0;
- (void)reset;
- (BOOL)writeWithError:(id *)a0;
- (id)coderTypeForSegment:(id)a0;
- (id)decodersWithError:(id *)a0;
- (id)encoderForSegment:(id)a0 version:(long long)a1;
- (void)setNeedsInfoDictionaryUpdate;

@end
