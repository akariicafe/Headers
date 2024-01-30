@class NSString;

@interface SGMultiLabelEspressoClassifierCached : NSObject <PMLMultiLabelClassifierProtocol> {
    NSString *_espressoModelFile;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classifierWithEspressoModelFile:(id)a0;

@end
