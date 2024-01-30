@class NSArray, OKMediaFeeder, OKProducerPreset;

@interface OKProducerSettings : NSObject {
    NSArray *_audioURLs;
}

@property (retain) OKProducerPreset *preset;
@property (retain) NSArray *guidelines;
@property (retain) OKMediaFeeder *mediaFeeder;
@property (retain) NSArray *audioURLs;

- (void)dealloc;

@end
