@class OISFUZipArchive, NSMutableDictionary;

@interface OCPZipPackage : OCPPackage {
    OISFUZipArchive *mArchive;
    NSMutableDictionary *mParts;
}

- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithArchive:(id)a0;
- (id)partForLocation:(id)a0;
- (void)resetPartForLocation:(id)a0;

@end
