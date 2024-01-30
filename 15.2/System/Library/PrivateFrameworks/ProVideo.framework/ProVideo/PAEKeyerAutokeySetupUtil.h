@class PAEKeyerHistogram, PAEKeyerAutokeySetup;

@interface PAEKeyerAutokeySetupUtil : NSObject {
    id _apiManager;
    PAEKeyerAutokeySetup *_autokeySetup;
    PAEKeyerHistogram *_keyerHistogram;
    id _actionAPI;
    id _getAPI;
    id _setAPI;
}

- (void)setHistogram:(void *)a0;
- (void)syncWithDB;
- (void)dealloc;
- (id)initWithAPIManager:(id)a0;
- (void)getDataFromDB;
- (id)getInitialSamples;
- (void *)getHistogram;
- (void)delInitialSample:(int)a0;
- (void)fillAutokeySamplesArray:(void *)a0;
- (int)getSamplesNb;
- (struct Vec3f { float x0[3]; })getInitialSample:(int)a0;
- (void)clearInitialSamples;
- (void)addInitialSample:(struct Vec3f { float x0[3]; } *)a0;
- (void)syncWithDBAsDefault;

@end
