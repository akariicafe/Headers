@class OADSubBlip;

@interface OADBlip : NSObject {
    unsigned int mReferenceCount;
    OADSubBlip *mMainSubBlip;
    OADSubBlip *mAltSubBlip;
}

+ (id)pathExtensionForBlipType:(int)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned int *)referenceCount;
- (void)setMainSubBlip:(id)a0;
- (void)setAltSubBlip:(id)a0;
- (id)mainSubBlip;
- (id)altSubBlip;

@end
