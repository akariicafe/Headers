@class NSMutableArray;

@interface WMTableColumnInfo : NSObject {
    NSMutableArray *mStopArray;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (float)stopAt:(unsigned int)a0;
- (unsigned int)columnSpan:(float)a0 at:(unsigned int)a1;
- (id)initWithStopArray:(id)a0;
- (void)mergeStopArray:(id)a0;

@end
