@protocol IMGifFileWriter;

@interface IMGIFUtils : NSObject

@property (class, weak, nonatomic) id<IMGifFileWriter> fileWriter;

+ (id)logger;
+ (BOOL)isGifUti:(id)a0;
+ (BOOL)setOutgoingError:(id *)a0 errorCode:(long long)a1 comment:(id)a2;
+ (BOOL)readFileProperties:(id *)a0 fromImageSource:(struct CGImageSource { } *)a1 error:(id *)a2;
+ (id)gifPropertiesFromFileProperties:(id)a0;
+ (BOOL)readGifProperties:(id *)a0 fromImageSource:(struct CGImageSource { } *)a1 error:(id *)a2;
+ (id)randomFileName;
+ (id)setGifProperities:(id)a0 onFileProperties:(id)a1;
+ (id)defaultFileProperties;
+ (id)addGifProperties:(id)a0 toFileProperties:(id)a1;
+ (BOOL)readFileProperties:(id *)a0 fromImageSource:(struct CGImageSource { } *)a1 withUpdatedLoopCount:(long long)a2 error:(id *)a3;
+ (BOOL)writeNewFileAtPath:(id)a0 withProperties:(id)a1 fromImageSource:(struct CGImageSource { } *)a2 error:(id *)a3;
+ (id)randomTempFilePath;
+ (BOOL)writeLoopCount:(long long)a0 destinationFilePath:(id)a1 fromImageSource:(struct CGImageSource { } *)a2 error:(id *)a3;
+ (long long)loopCountFromGifProperties:(id)a0;
+ (BOOL)readLoopCount:(long long *)a0 fromImageSource:(struct CGImageSource { } *)a1 error:(id *)a2;
+ (BOOL)isGIFFileAtPath:(id)a0;
+ (BOOL)writeDefaultPropertiesToDestinationRef:(struct CGImageDestination { } *)a0 withOptionalAdditionalGifProperties:(id)a1 error:(id *)a2;
+ (BOOL)copyGifFromPath:(id)a0 toDestinationPath:(id)a1 error:(id *)a2;
+ (BOOL)writeLoopCount:(long long)a0 withFileAtPath:(id)a1 error:(id *)a2;

- (id)logger;

@end
