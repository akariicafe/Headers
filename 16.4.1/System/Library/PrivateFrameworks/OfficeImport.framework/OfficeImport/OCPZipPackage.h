@class OISFUZipArchive, NSMutableDictionary;

@interface OCPZipPackage : OCPPackage {
    OISFUZipArchive *mArchive;
    NSMutableDictionary *mParts;
}

- (id)initWithData:(id)a0;
- (id)initWithPath:(id)a0;
- (id)initWithArchive:(id)a0;
- (void).cxx_destruct;
- (id)partForLocation:(id)a0;
- (void)resetPartForLocation:(id)a0;

@end
