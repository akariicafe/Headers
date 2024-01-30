@class NSMutableData, NLNumberGenerator, NLDataProvider;

@interface NLDataEnumerator : NSObject {
    NLDataProvider *_dataProvider;
    unsigned long long _idx;
    NLNumberGenerator *_generator;
    NSMutableData *_shuffleData;
}

@property (readonly, retain) NLDataProvider *dataProvider;
@property (readonly) unsigned long long index;

- (void)shuffle;
- (void)rewind;
- (id)initWithDataProvider:(id)a0;
- (void).cxx_destruct;
- (id)nextInstance;
- (id)instanceAtIndex:(unsigned long long)a0;
- (id)initWithDataProvider:(id)a0 numberGenerator:(id)a1;
- (void)rewindAndShuffle:(BOOL)a0;

@end
