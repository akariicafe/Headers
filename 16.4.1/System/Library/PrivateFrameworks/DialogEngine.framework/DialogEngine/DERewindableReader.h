@class NSMutableData, NSObject;
@protocol DEReader;

@interface DERewindableReader : NSObject <DEReader>

@property (retain, nonatomic) NSObject<DEReader> *reader;
@property (nonatomic) BOOL rewound;
@property (retain, nonatomic) NSMutableData *rewindData;
@property (nonatomic) unsigned long long rewindOffset;

- (id)readData;
- (void)dealloc;
- (void)close;
- (id)init;
- (id)readDataOfLength:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)rewind;
- (id)initWithReader:(id)a0;
- (void)disableRewind;
- (BOOL)isRewindable;

@end
