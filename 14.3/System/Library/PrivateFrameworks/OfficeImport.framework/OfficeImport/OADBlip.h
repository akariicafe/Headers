@class OADSubBlip;

@interface OADBlip : NSObject {
    unsigned int mReferenceCount;
    OADSubBlip *mMainSubBlip;
    OADSubBlip *mAltSubBlip;
}

+ (id)pathExtensionForBlipType:(int)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (unsigned int *)referenceCount;
- (id)mainSubBlip;
- (void)setMainSubBlip:(id)a0;
- (void)setAltSubBlip:(id)a0;
- (id)altSubBlip;

@end
