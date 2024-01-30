@class ESDObject, PBPresentationReaderState;

@interface PXVmlState : OAVReadState {
    ESDObject *mLegacyTextGlobals;
    PBPresentationReaderState *mLegacyPresentationState;
}

- (void).cxx_destruct;
- (id)legacyTextGlobals;
- (void)setLegacyTextGlobals:(id)a0;
- (id)legacyPresentationState;
- (void)setLegacyPresentationState:(id)a0;

@end
