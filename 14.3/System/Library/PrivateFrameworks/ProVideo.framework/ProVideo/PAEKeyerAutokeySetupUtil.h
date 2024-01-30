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
- (void)setHistogram:(struct ColorHisto { struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x0; int x1; int x2; int x3; } *)a0;
- (void)dealloc;
- (id)initWithAPIManager:(id)a0;
- (void)getDataFromDB;
- (id)getInitialSamples;
- (int)getSamplesNb;
- (struct Vec3f { float x0[3]; })getInitialSample:(int)a0;
- (struct ColorHisto { struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x0; int x1; int x2; int x3; } *)getHistogram;
- (void)syncWithDBAsDefault;
- (void)delInitialSample:(int)a0;
- (void)clearInitialSamples;
- (void)addInitialSample:(struct Vec3f { float x0[3]; } *)a0;
- (void)fillAutokeySamplesArray:(struct vector<Vec3f, std::__1::allocator<Vec3f> > { struct Vec3f *x0; struct Vec3f *x1; struct __compressed_pair<Vec3f *, std::__1::allocator<Vec3f> > { struct Vec3f *x0; } x2; } *)a0;

@end
