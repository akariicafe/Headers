@interface NMBUIMediaTableCellDownloadState : NSObject

@property (nonatomic) unsigned long long state;
@property (nonatomic) double progress;

- (id)initWithState:(unsigned long long)a0 progress:(double)a1;

@end
