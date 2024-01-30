@class NSMutableData, NSObject;
@protocol DEReader;

@interface DERewindableReader : NSObject <DEReader>

@property (retain, nonatomic) NSObject<DEReader> *reader;
@property (nonatomic) BOOL rewound;
@property (retain, nonatomic) NSMutableData *rewindData;
@property (nonatomic) unsigned long long rewindOffset;

- (id)readDataOfLength:(unsigned long long)a0;
- (id)init;
- (void)close;
- (void).cxx_destruct;
- (id)readData;
- (void)dealloc;
- (BOOL)rewind;
- (BOOL)isRewindable;
- (void)disableRewind;
- (id)initWithReader:(id)a0;

@end
