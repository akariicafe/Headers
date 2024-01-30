@class PAEKeyerHistogram, PAEKeyerAutokeySetup;

@interface PAEKeyerAutokeySetupUtil : NSObject {
    id _apiManager;
    PAEKeyerAutokeySetup *_autokeySetup;
    PAEKeyerHistogram *_keyerHistogram;
    id _actionAPI;
    id _getAPI;
    id _setAPI;
}

- (void)syncWithDB;
- (void)dealloc;
- (void)setHistogram:(void *)a0;
- (void)addInitialSample:(struct Vec3f { float x0[3]; } *)a0;
- (void)clearInitialSamples;
- (void)delInitialSample:(int)a0;
- (void)fillAutokeySamplesArray:(void *)a0;
- (void)getDataFromDB;
- (void *)getHistogram;
- (struct Vec3f { float x0[3]; })getInitialSample:(int)a0;
- (id)getInitialSamples;
- (int)getSamplesNb;
- (id)initWithAPIManager:(id)a0;
- (void)syncWithDBAsDefault;

@end
