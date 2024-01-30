@class NSString, NSBundle, NSData, UINibDecoder;

@interface UINibStorage : NSObject

@property (copy, nonatomic) NSString *bundleResourceName;
@property (copy, nonatomic) NSString *bundleDirectoryName;
@property (retain, nonatomic) NSBundle *bundle;
@property (copy, nonatomic) NSString *identifierForStringsFile;
@property (copy, nonatomic) NSData *archiveData;
@property (retain, nonatomic) UINibDecoder *nibDecoder;
@property (nonatomic) BOOL instantiatingForSimulator;
@property BOOL captureImplicitLoadingContextOnDecode;

- (void).cxx_destruct;

@end
