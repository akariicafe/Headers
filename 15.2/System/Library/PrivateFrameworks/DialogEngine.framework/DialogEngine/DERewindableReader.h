@class NSMutableData, NSObject;
@protocol DEReader;

@interface DERewindableReader : NSObject <DEReader>

@property (retain, nonatomic) NSObject<DEReader> *reader;
@property (nonatomic) BOOL rewound;
@property (retain, nonatomic) NSMutableData *rewindData;
@property (nonatomic) unsigned long long rewindOffset;

- (id)readDataOfLength:(unsigned long long)a0;
- (void)close;
- (BOOL)rewind;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)readData;
- (BOOL)isRewindable;
- (void)disableRewind;
- (id)initWithReader:(id)a0;

@end
